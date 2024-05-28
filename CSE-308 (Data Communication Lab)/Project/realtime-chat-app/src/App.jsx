import { useEffect } from "react";
import Details from "./components/Details/Details";
import List from "./components/List/List";
import Auth from "./components/Auth/Auth";
import Chat from "./components/chat/Chat";
import Notification from "./components/Notification/Notification";
import { onAuthStateChanged } from "firebase/auth";
import { auth } from "./lib/firebase";

const App = () => {
  const user = false;

  useEffect(() => {
    const unSub = onAuthStateChanged(auth, (user) => {
      console.log(user);
    });

    return () => {
      unSub();
    };
  }, []);
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
