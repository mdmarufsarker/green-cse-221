import Details from "./components/Details/Details";
import List from "./components/List/List";
import Auth from "./components/Auth/Auth";
import Chat from "./components/chat/Chat";
import Notification from "./components/Notification/Notification";

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
        <Auth />
      )}
      <Notification />
    </div>
  );
};

export default App;
