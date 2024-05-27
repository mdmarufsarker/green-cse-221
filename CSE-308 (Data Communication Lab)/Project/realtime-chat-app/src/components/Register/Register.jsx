import { useState } from "react";
import { toast } from "react-toastify";
import "./Register.css";

const Login = () => {
  const [avatar, setAvatar] = useState({
    file: null,
    url: "",
  });

  const handleAvatar = (e) => {
    if (e.target.files[0]) {
      setAvatar({
        file: e.target.files[0],
        url: URL.createObjectURL(e.target.files[0]),
      });
    }
  };

  const handleRegister = (e) => {
    e.preventDefault();
    // const usr = e.target.username.value;
    // const pass = e.target.password.value;
    // const pp = e.target.avatar.files[0];
    // if (!usr || !pass || !pp) {
    //   return toast.error("Please fill all the fields");
    // }

    const formData = new FormData(e.target);
    const { username, password, avatar } = Object.fromEntries(formData);
    console.log(username);
    // e.target.reset();
  };
  return (
    <div className="register">
      <div className="item">
        <h2>Create an Account</h2>
        <form onSubmit={handleRegister}>
          <input
            type="text"
            placeholder="Enter your username"
            name="username"
          />
          <input type="text" placeholder="Enter your email" name="email" />
          <input
            type="password"
            placeholder="Enter your password"
            name="password"
          />
          <label htmlFor="file">
            <img src={avatar.url || "./avatar.png"} alt="" />
            Upload an image
          </label>
          <input
            type="file"
            name=""
            id="file"
            style={{ display: "none" }}
            onChange={handleAvatar}
          />
          <button>Sign Up</button>
        </form>
      </div>
    </div>
  );
};

export default Login;
