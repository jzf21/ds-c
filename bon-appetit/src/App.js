import logo from './logo.svg';
import './App.css';

import { Route, Routes } from 'react-router-dom';

import SignupPage from './components/Signin';
import VolunteerForm from './components/VolunteerForm';
import Login from './components/Login';


function App() {
  return (
    <div className="App">
      <h1 className='text-white bg-slate-500 '>Hello</h1>
      <Routes>
        <Route exact path='/' element={<SignupPage/>}/>
        <Route path='/volunteer' element={<VolunteerForm/>}/>
        <Route exact path='/login' element={<Login/>}/>
        
      </Routes>
      
    </div>
  );
}

export default App;
