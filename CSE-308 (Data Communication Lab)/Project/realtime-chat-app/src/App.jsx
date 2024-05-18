import Details from "./components/Details/Details";
import List from "./components/List/List";
import Login from "./components/Login/Login";
import Chat from "./components/chat/Chat";

const App = () => {
  const user = false;
  return (
    <div className="container">
      {user ? (
        <>
          <List />
          <Chat />
          <Details />
        </>
      ) : (
        <Login />
      )}

      {/* <List />
      <Chat />
      <Details /> */}
    </div>
  );
};

export default App;
