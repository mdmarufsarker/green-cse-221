#include <bits/stdc++.h>
using namespace std;

template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; mms(args); } while(0)
void mms(){cerr << endl;}
template<typename T>void mms(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void mms(T arg,const hello&...rest){cerr<<arg<<' ';mms(rest...);}

void maruf(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void basic(){
    double highestValue, lowestValue, classInterval, numberOfRows;
    cout << "Enter highest value: ";
    cin >> highestValue;
    cout << "Enter lowest value: ";
    cin >> lowestValue;
    int range = highestValue - lowestValue;
    cout << "Range: " << range << endl;
    cout << "Enter class Interval: ";
    cin >> classInterval;
    numberOfRows = ceil((highestValue - lowestValue) / classInterval);
    cout << "Number of rows: " << numberOfRows << endl;
}

void freq_CF(){
    double highestValue, lowestValue, classInterval, numberOfRows;
    cout << "Enter highest value: ";
    cin >> highestValue;
    cout << "Enter lowest value: ";
    cin >> lowestValue;
    int range = highestValue - lowestValue;
    cout << "Range: " << range << endl;
    cout << "Enter class Interval: ";
    cin >> classInterval;
    numberOfRows = ceil((highestValue - lowestValue) / classInterval);
    cout << "Number of rows: " << numberOfRows << endl;

    double freq, cf = 0;
    cout << "Enter frequencies: ";
    for(int i = 0; i < numberOfRows; i++){
        cin >> freq;
        cf += freq;
    }
    cout << "Commulative Frequency: " << cf << endl;
}

void histoGramPolygonCF(){
    cout << "Histogram: Class Interval, Tally, Frequency --> freq/class interval = bar chart" << endl;
    cout << "Polygon: Class Interval, Mid Values, Frequency --> freq/mid values = upore uthe abar niche nambe" << endl;
    cout << "Commulative Frequency: Class Interval, Frequency, Commulative Frequency --> freq/class interval = upore uthe but niche nambe na" << endl << endl;

    cout << "Enter total number of data: ";
    int n;
    cin >> n;
    vector<int> data(n);
    for(auto &x : data) cin >> x;

    int highestValue = *max_element(data.begin(), data.end());
    int lowestValue = *min_element(data.begin(), data.end());
    int range = highestValue - lowestValue;
    // 1 + 3.322log(n)
    double numberOfClasses = ceil(1 + 3.322 * log10(n));
    double classInterval = ceil(range / numberOfClasses);

    cout << "Highest Value: " << highestValue << endl;
    cout << "Lowest Value: " << lowestValue << endl;
    cout << "Range: " << range << endl;
    cout << "Number of Classes: " << numberOfClasses << endl;
    cout << "Class Interval: " << classInterval << endl;
}

void mean(){
    double fi, xi, fixi;

    cout << "Number of Rows: ";
    int n;
    cin >> n;
    cout << endl;
    int fi_sum = 0;
    double fi_log_xi = 0, fi_by_xi = 0;
    vector<pair<int, int>> classInterval(n);
    vector<int> data;
    vector<double> midValues;
    vector<double> ans_fixi;
    vector<double> ans_logxi;
    vector<double> ans_filogxi;
    vector<double> ans_fi_by_xi;

    for(auto &x : classInterval){
        // cout << "Enter class interval: ";
        cin >> x.first >> x.second;
        // cout << "Enter frequency: ";
        cin >> fi;
        fi_sum += fi;
        data.push_back(fi);
        double xi = (x.first + x.second) / 2.0;
        midValues.push_back(xi);
        fixi = fi * xi;
        ans_fixi.push_back(fixi);
        double logxi = log10(xi);
        ans_logxi.push_back(logxi);
        fi_log_xi = fi * logxi;
        ans_filogxi.push_back(fi_log_xi);
        fi_by_xi = fi / xi;
        ans_fi_by_xi.push_back(fi_by_xi);
    }

    fixi = 0, fi_log_xi = 0, fi_by_xi = 0;

    dbg(classInterval);
    dbg(data);
    dbg(midValues);
    dbg(ans_fixi);
    dbg(ans_logxi);
    dbg(ans_filogxi);
    dbg(ans_fi_by_xi);

    for(auto &x : ans_fixi) fixi += x;
    for(auto &x : ans_filogxi) fi_log_xi += x;
    for(auto &x : ans_fi_by_xi) fi_by_xi += x;

    cout << "Interval\t(fi)\t(xi)\tfixi\tlog(xi)\tfilog(xi)\tfi/xi" << endl;
    for(int i = 0; i < n; i++){
        cout << classInterval[i].first << "-" << classInterval[i].second << "\t\t" << data[i] << "\t\t" << midValues[i] << "\t\t" << ans_fixi[i] << "\t\t" << ans_logxi[i] << "\t\t" << ans_filogxi[i] << "\t\t" << ans_fi_by_xi[i] << endl;
    }

    cout << fixi << " " << fi_sum << " " << fi_log_xi << " " << fi_by_xi << endl;
    cout << "Arithmetic Mean, x' = " << fixi / fi_sum << endl;
    cout << "Geometric Mean, x' = " << fi_log_xi / fi_sum << endl;
    cout << "Hermonic Mean, x' = " << fi_sum / fi_by_xi << endl;
}

void median_mode(){
    double fi = 0, cf = 0;
    // cout << "Enter number of rows: ";
    int n;
    cin >> n;
    cout << endl;

    int fi_sum = 0;
    vector<pair<int, int>> classInterval(n);
    vector<int> data;
    vector<int> cummulativeFrequency;

    double d1, d2, l1, fc, fm, c, median, mode;

    for(auto &x: classInterval){
        // cout << "Enter class interval: ";
        cin >> x.first >> x.second;
        // cout << "Enter frequency: ";
        cin >> fi;
        fi_sum += fi;
        data.push_back(fi);
        cf += fi;
        cummulativeFrequency.push_back(cf);
    }

    cout << "Interval\t(fi)\tcf" << endl;
    for(int i = 0; i < n; i++){
        cout << classInterval[i].first << "-" << classInterval[i].second << "\t\t" << data[i] << "\t\t" << cummulativeFrequency[i] << endl;
    }

    int mx = *max_element(data.begin(), data.end());
    int index = 0;
    for(int i = 0; i < n; i++){
        if(data[i] == mx){
            index = i;
            break;
        }
    }

    l1 = classInterval[index].first;
    fc = cummulativeFrequency[index - 1];
    fm = data[index];
    d1 = data[index] - data[index - 1];
    d2 = data[index] - data[index + 1];

    c = 10;
    median = l1 + ((((fi_sum / 2.0)- fc) / fm) * c);
    mode = l1 + ((d1 / (d1 + d2)) * c);
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;
    dbg(l1, fc, fm, d1, d2, c);
}

void measures(){
    double fi = 0, cf = 0;
    // cout << "Enter number of rows: ";
    int n;
    cin >> n;
    cout << endl;

    int fi_sum = 0;
    vector<pair<int, int>> classInterval(n);
    vector<int> data;
    vector<int> cummulativeFrequency;

    double l1, fc, fm, c;

    for(auto &x: classInterval){
        // cout << "Enter class interval: ";
        cin >> x.first >> x.second;
        // cout << "Enter frequency: ";
        cin >> fi;
        fi_sum += fi;
        data.push_back(fi);
        cf += fi;
        cummulativeFrequency.push_back(cf);
    }

    cout << "Interval\t(fi)\tcf" << endl;
    for(int i = 0; i < n; i++){
        cout << classInterval[i].first << "-" << classInterval[i].second << "\t\t" << data[i] << "\t\t" << cummulativeFrequency[i] << endl;
    }

    double upperQuartile, lowerQuartile, decile, percentile;

    // Upper Quartile, Q3 = L + ((((3*n/4) - fc)/fm) * c)
    double row = 3 * fi_sum / 4.0;
    int index = 0;
    for(int i = 0; i < n; i++){
        if(cummulativeFrequency[i] > row){
            index = i;
            break;
        }
    }

    l1 = classInterval[index].first;
    fc = cummulativeFrequency[index - 1];
    fm = data[index];
    c = 10;

    cout << "Upper Quartile, Q3 = L + ((((3*n/4) - fc)/fm) * c)" << endl;
    dbg(row, index, l1, fc, fm, c);
    upperQuartile = l1 + (((row - fc) / fm) * c);
    cout << "Q3: " << upperQuartile << endl;

    // Lower Quartile, Q1 = L + ((((n/4) - fc)/fm) * c)
    row = fi_sum / 4.0;
    index = 0;
    for(int i = 0; i < n; i++){
        if(cummulativeFrequency[i] > row){
            index = i;
            break;
        }
    }

    l1 = classInterval[index].first;
    fc = cummulativeFrequency[index - 1];
    fm = data[index];

    cout << "Lower Quartile, Q1 = L + ((((n/4) - fc)/fq) * c)" << endl;
    dbg(row, index, l1, fc, fm, c);
    lowerQuartile = l1 + (((row - fc) / fm) * c);
    cout << "Q1: " << lowerQuartile << endl;

    // Decile, D = L + ((((n*i/10) - fc)/fd) * c)
    cout << "Decile, D = L + ((((n*i/10) - fc)/fd) * c)" << endl;
    double i;
    cin >> i;
    row = fi_sum * i / 10.0;
    index = 0;
    for(int i = 0; i < n; i++){
        if(cummulativeFrequency[i] > row){
            index = i;
            break;
        }
    }

    l1 = classInterval[index].first;
    fc = cummulativeFrequency[index - 1];
    fm = data[index];

    dbg(row, index, l1, fc, fm, c);
    decile = l1 + (((row - fc) / fm) * c);
    cout << "D" << i << ": " << decile << endl;

    // Percentile, P = L + ((((n*i/100) - fc)/fm) * c)
    cout << "Percentile, P = L + ((((n*i/100) - fc)/fp) * c)" << endl;
    cin >> i;
    row = fi_sum * i / 100.0;
    index = 0;
    for(int i = 0; i < n; i++){
        if(cummulativeFrequency[i] > row){
            index = i;
            break;
        }
    }

    l1 = classInterval[index].first;
    fc = cummulativeFrequency[index - 1];
    fm = data[index];

    dbg(row, index, l1, fc, fm, c);
    percentile = l1 + (((row - fc) / fm) * c);
    cout << "P" << i << ": " << percentile << endl;
}

int main(){
    maruf();
    cout << "1.\tBasic Q/A" << endl;
    cout << "2.\tCalculate Commulative Frequency" << endl;
    cout << "3.\tHistogram, Polygon, Commulative Frequency" << endl;
    cout << "4.\tArithmetic, Geometric, Hermonic Mean" << endl;
    cout << "5.\tMedian, Mode" << endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    switch(choice){
        case 1:
            basic();
            break;
        case 2:
            freq_CF();
            break;
        case 3:
            histoGramPolygonCF();
            break;
        case 4:
            mean();
            break;
        case 5:
            median_mode();
            break;
        case 6:
            measures();
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}