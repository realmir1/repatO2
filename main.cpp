//
//  main.cpp
//  o2s
//
//  Created by Ali Emir Sertbaş on 1.12.2024.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    int y ;
    float o;
    
    std::cout << "  AAAAA    L         III         EEEEE   M      M  III  RRRRR   \n";
    std::cout << " A     A   L          I          E        MM   MM   I   R    R  \n";
    std::cout << " AAAAAAA   L          I          EEEE     M M M M   I   RRRRR   \n";
    std::cout << " A     A   L          I          E        M  M  M   I   R  R    \n";
    std::cout << " A     A   LLLLL     III         EEEEE   M       M III  R    R   \n";
    
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"\n";
    
    
    
    
    std::string cinsiyet;
    std::cout<<"Welcome to the respiratory rate tracking application"<<std::endl;
    std::cout<<"\n";
    std::cout<<"please enter your age value ="; std::cin>>y;
    std::cout<<"\n";
    std::cout<<"please enter respiratory rate(respiratory rate is the breathing process done in 1 minute) ="; std::cin>>o;
    std::cout<<"\n";
    std::cout<<"pleas write your gender =";std::cin>>cinsiyet;
    std::cout<<"\n";
    if(cinsiyet=="man" || cinsiyet=="woman"){
        if(y==0){
            if(o>=30 && o<=60){
                
                std::cout<<"baby is healthy"<<std::endl;
 
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;  }
            else if(o>60){
                std::cout<<"This condition is called increased respiratory rate (tachypnea)."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Infections: Respiratory infections, especially (for example, pneumonia, bronchitis, or bronchiolitis), can increase the baby's breathing rate."<<std::endl;
                std::cout<<"-Fever: High body temperature (fever) can accelerate respiratory rate."<<std::endl;
                std::cout<<"-Forced Breathing: Nasal congestion or upper respiratory tract problems can increase the baby s breathing rate."<<std::endl;
                std::cout<<"-Anemia: A decrease in the oxygen carrying capacity of the blood may lead to the need for faster breathing."<<std::endl;
                std::cout<<"-Heart Problems: Heart diseases or heart failure can cause inadequate transport of oxygen, leading to increased respiratory rate."<<std::endl;
                std::cout<<"-Premature Birth: Since the respiratory system of premature babies is not fully developed, their normal breathing rates may be faster after birth."<<std::endl;
                std::cout<<"-Hypoxia: Insufficient oxygen intake (for example, in cases of airway obstruction or respiratory failure) may increase respiratory rate."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Tashikne's Results:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"-High respiratory rate is usually the body's response to a problem. If tachyne is observed in the baby, the following dangerous consequences may occur:"<<std::endl;
                std::cout<<"-Oxygen Deficiency (Hypoxia): As the respiratory rate increases, the baby may not receive enough oxygen, because breathing too quickly may mean that the air cannot be taken deep enough and the oxygen cannot be used effectively."<<std::endl;
                std::cout<<"-Carbon Dioxide Excretion: When the respiratory rate increases too much, the body may not get enough carbon dioxide, which can lead to hypercapnia (carbon dioxide accumulation)."<<std::endl;
                std::cout<<"-Fatigue of the Respiratory Muscles: Long-term rapid breathing can lead to fatigue of the respiratory muscles and an increased risk of respiratory failure."<<std::endl;
                std::cout<<"What to Do in Case of Tachykne?"<<std::endl;
                std::cout<<"\n";
                std::cout<<"If the respiratory rate in a baby is above 60, a health professional should be consulted immediately. If you notice tachycnea in the baby, medical attention may be required for the following conditions:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"-If the baby shows an increase in breathing rate and this condition continues for more than a few minutes."<<std::endl;
                std::cout<<"-If there are wheezing sounds, bruising or difficulty breathing with breathing."<<std::endl;
                std::cout<<"-If the baby is abnormally restless, lethargic or has difficulty eating."<<std::endl;
                std::cout<<"\n";
                std::cout<<" As a result, when the respiratory rate in 0-year-old babies exceeds 60, this indicates that the body is trying to cope with a health problem and may require immediate medical attention."<<std::endl;
                
            }
            else if(o<30){
                std::cout<<"This condition is called decreased respiratory rate (bradypnea)."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Difficulty Breathing: the baby breathes harder than usual, may make sounds like wheezing or whistling."<<std::endl;
                std::cout<<"-Bruising: the baby shows bruising on the lips, nail tips or skin when the oxygen level drops."<<std::endl;
                std::cout<<"-Drowsiness or Abnormal Fatigue: the baby sleeps more than usual and has difficulty reacting while awake."<<std::endl;
                std::cout<<"-Slow or Irregular Breathing: the baby breathes more slowly than usual or there is an irregularity in breathing."<<std::endl;
                std::cout<<"-Rapid Heart Rate (Tachycardia): heart rate increases more than normal due to lack of oxygen."<<std::endl;
                std::cout<<"-Poor Absorbing Reflex or Feeding Difficulty: the baby weakens his sucking reflex or has difficulty feeding."<<std::endl;
                std::cout<<"-Respiratory Arrest (Apnea): the baby experiences hesitation in breathing or short-term respiratory arrest can be seen."<<std::endl;
                std::cout<<"-Loss of appetite or Indifference to Nutrition: the baby eats less than usual or remains indifferent to nutrition."<<std::endl;
                std::cout<<"-Poor Response: the baby does not normally receive reactions, may be less active or immobile."<<std::endl;
                std::cout<<"-Collapses in the Rib Cage: Collapses are observed in the rib cage while the baby is breathing."<<std::endl;
                std::cout<<"-Using Extra Muscle to Breathe: the baby uses more muscle than usual to breathe, especially the chest, abdominal and neck muscles become prominent."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Possible Causes of Respiratory Rate Decrease:"<<std::endl;
                std::cout<<"\n";
                std::cout<<" A decrease in respiratory rate can often be a symptom of a health problem. Some possible causes of this condition may be:"<<std::endl;
                std::cout<<"-Respiratory tract infections (such as bronchiolitis, pneumonia)"<<std::endl;
                std::cout<<"-Asthma or allergic reactions"<<std::endl;
                std::cout<<"-High fever or infections"<<std::endl;
                std::cout<<"-Congenital heart diseases"<<std::endl;
                std::cout<<"-Injuries or traumas"<<std::endl;
                std::cout<<"-Nervous system problems (deterioration in brain function, neurological problems)"<<std::endl;
                std::cout<<"-Insufficient oxygen intake (for example, weakness or blockage of respiratory muscles)"<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"When Should Emergency Help Be Received?"<<std::endl;
                std::cout<<"\n";
                std::cout<<"If the respiratory rate in a 0-year-old baby drops below 30, this may indicate a serious condition and require immediate medical attention. An emergency health professional should be consulted in the following cases:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"-If the breathing rate dropped below 30 per minute."<<std::endl;
                std::cout<<"-If the baby s surface begins to bruise (especially if the lips or nail tips are bruising)."<<std::endl;
                std::cout<<"-If the baby is abnormally numb or has difficulty staying awake."<<std::endl;
                std::cout<<"-If the baby is breathing faster or irregularly than usual."<<std::endl;
                std::cout<<"-If the baby makes a whistling sound during breathing or has difficulty breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Result:"<<std::endl;
                std::cout<<"When the respiratory rate in a 0-year-old baby drops below 30, oxygen intake may not be sufficient, which can lead to serious health problems. A parent or caregiver observing this situation should immediately seek help from a health professional and provide emergency intervention when necessary."<<std::endl;
            }
        }
    }
    if(cinsiyet=="man" || cinsiyet=="woman"){
        if(y==1 || y==2  || y==3){
            if(o>=24 && o<=40){
                std::cout<<"baby is healthy"<<std::endl;
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;}
            else if(o<24){
                std::cout<<" When the breathing rate of a 1-year-old baby drops below 24, this is often called bradypnea. Bradypnea refers to a condition in which the respiratory rate is lower than normal. For a 1-year-old baby, the normal breathing rate is between 24 and 40 breaths per minute. If this rate drops below 24, the baby s oxygen intake may be insufficient, which can lead to serious health problems."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Causes of Bradypnea (Slow Breathing): Oxygen Deficiency (Hypoxia): When the breathing rate in the baby drops below 24, the body may have difficulty receiving oxygen. In this case, hypoxia (oxygen deficiency) can develop, which can lead to the brain and other vital organs being deprived of oxygen. Lack of oxygen may tend to reduce the respiratory rate, but this condition is dangerous for the baby."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-High Carbon Dioxide Level (Hypercapnia): Slow breathing can increase the accumulation of carbon dioxide in the body. If the baby can t get enough carbon dioxide, this can lead to hypercapnia, meaning that excess carbon dioxide accumulates in the body. Hypercapnia can lead to symptoms such as headache, restlessness, drowsiness, and respiratory arrest in the baby."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Respiratory System Problems: Some respiratory diseases or congenital lung problems (such as apnea, asthma, bronchiolitis) can cause a decrease in breathing rate in the baby. These conditions can narrow the respiratory tract or interfere with the normal functioning of the lungs."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Nervous System Problems: Some neurological diseases or nervous system disorders in the baby can lead to the respiratory center not working properly. The respiratory control center in the brain cannot regulate the respiratory rate, which can cause slow breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-If you are heavy, infections: Severe infections (especially serious infections such as pneumonia, meningitis, sepsis) can reduce the respiratory rate in the baby. These infections make it difficult for the body to use oxygen, creating respiratory failure in the baby."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Drug or Drug Effect: If the baby has taken certain medications or sleep regulators, these drugs can slow down the respiratory rate with the effect on the brain."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Hypothermia (Low Body Temperature): Excessive drop in body temperature (hypothermia) in the baby can lead to a decrease in the respiratory rate. Low temperatures slow down the body s functions, and breathing can slow down."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Symptoms of Bradipne:"<<std::endl;
                std::cout<<"-Slow Breathing: If the baby is breathing at a speed below 24 per minute, this may be a sign of bradypnea."<<std::endl;
                std::cout<<"-Bruising: Bruising on the lips, nail tips or skin may occur when the oxygen level drops in the baby."<<std::endl;
                std::cout<<"-Drowsiness:The baby may be abnormally tired or drowsing."<<std::endl;
                std::cout<<"-Breathing Difficulty: The baby may have difficulty breathing, which can cause him to breathe deeply often or make extra effort while breathing."<<std::endl;
                std::cout<<"-Loss of appetite and Nutrition Difficulty: The baby eats less than usual or has difficulty feeding."<<std::endl;
                std::cout<<"-Severe Insomnia or Abnormal Behaviors: The baby may be abnormally restless or, on the contrary, may be extremely lethargic, sedentary."<<std::endl;
                std::cout<<"-Things to Do in Bradypnea:"<<std::endl;
                std::cout<<"-Get Medical Help Immediately: If the respiratory rate in a baby drops below 24, it may be a health emergency. When you notice bradypnea in the baby, a doctor should be consulted immediately. Since the risk of oxygen deficiency or respiratory failure is high in the baby, immediate intervention is necessary."<<std::endl;
                std::cout<<"-Oxygen Support: Doctors may recommend oxygen therapy for the baby if the oxygen level is low. This treatment helps to increase oxygen uptake."<<std::endl;
                std::cout<<"-Respiratory Follow-up:When the baby is hospitalized, breathing and oxygen levels are carefully monitored. Changes in respiratory rate can be an important indicator in the course of treatment."<<std::endl;
                std::cout<<"-Treatment of Related Diseases: If bradypnea is caused by an infection, metabolic problem, or a neurological condition, this underlying disease must be treated."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Result:"<<std::endl;
                std::cout<<"When the respiratory rate for a 1-year-old baby drops below 24, this is a symptom of bradipnea and often indicates a lack of oxygen, infection, or other serious health problem. This is an emergency health condition that needs to be evaluated and treated immediately."<<std::endl;
            }
            else if(o>40){
                std::cout<<" A one-year-old baby s breathing rate exceeds 40 per minute can often be an indicator of some health problems. Normally, the breathing rate for a 1-year-old baby can range from 24-40 breaths per minute. Going above this speed may be a symptom of one of the following conditions:"<<std::endl;
                std::cout<<"\n";
                std::cout<<" Possible Causes Of Increased Respiratory Rate:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<" Respiratory Infections:"<<std::endl;
                std::cout<<"-Lower respiratory tract infections such as bronchitis and pneumonia can lead to blockage and inflammation of the airways in the lungs, causing the baby to breathe faster."<<std::endl;
                std::cout<<"-Upper respiratory tract infections (colds, flu) can also increase respiratory rate."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Asthma and Allergic Reactions:"<<std::endl;
                std::cout<<"-Asthma or allergic reactions in babies (for example, pollen, dust, food allergies) can cause narrowing of the airway tract and rapid inhalation."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Cardiac Problems (Heart Diseases):"<<std::endl;
                std::cout<<" -Conditions such as heart failure can cause babies to breathe faster, leading to the lack of sufficient oxygen distribution into the body. Heart diseases can sometimes be congenital."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Fever:"<<std::endl;
                std::cout<<"-Fever causes the body's temperature to rise and speeds up the metabolism. This can lead to an increase in the baby's breathing rate."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Anemia:"<<std::endl;
                std::cout<<"-Due to insufficient red blood cell count (anemia), the body's oxygen carrying capacity decreases and the baby breathes faster to receive oxygen."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Respiratory Tract Obstruction:"<<std::endl;
                std::cout<<"  -Conditions such as foreign body, phlegm, snot or nasal congestion can narrow the airway and cause the baby to breathe quickly."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Respiratory Failure (Acute Respiratory Distress Syndrome – ARDS):"<<std::endl;
                std::cout<<"-In babies, especially if they were born prematurely, respiratory failure may develop. In this case, the lungs may not provide oxygen and the baby breathes faster."<<std::endl;
            }
        }
    }
    if(cinsiyet=="man" || cinsiyet=="woman"){
        if(y==4 || y==5){
            if(o>=22&& o<=34){
                std::cout<<"baby is healthy"<<std::endl;
 
 
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;}
            else if(o<22){
                std::cout<<"If the normal respiratory rate in children between 4-6 years old drops below 22 breaths per minute, we usually call this condition bradypnea. Bradypnea is a condition in which the respiratory rate is lower than normal and may be a symptom of some health problems."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<" Causes of Decreased Respiratory Rate Below 22 in Children Aged 4-6:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Sleep State (Calmness or Sleep)"<<std::endl;
                std::cout<<"-Explanation: During sleep, a child s respiratory rate naturally decreases. When the child enters deeper stages of sleep, metabolic activity slows down, leading to slower breathing. This is a normal physiological response."<<std::endl;
                std::cout<<"-Cause:The respiratory centers in the brain become less active during sleep, and the respiratory muscles relax, allowing the body to rest."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Body Temperature and Environmental Conditions**"<<std::endl;
                std::cout<<"-Explanation:Cold environments or hypothermia (a drop in body temperature) can slow down the respiratory rate. When the body temperature drops, metabolic processes slow down, which can reduce the rate of breathing. Children are more susceptible to the effects of cold weather."<<std::endl;
                std::cout<<"-Cause: The body conserves energy in cold conditions, which can lead to slower breathing and a lower metabolic rate."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Slowing Metabolism (Serious Illnesses or Infections)**"<<std::endl;
                std::cout<<"-Explanation:** Infections, especially those affecting the central nervous system (e.g., meningitis), can slow the respiratory rate. These illnesses can disrupt the body’s normal metabolism and affect the respiratory centers in the brain."<<std::endl;
                std::cout<<"- Cause: Fever, the body's response to infection, and slowing of the metabolic rate can lead to a decrease in respiratory rate. Neurological conditions can also cause dysfunction in the brain's control over breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Respiratory Obstruction and Asthma**"<<std::endl;
                std::cout<<"-Explanation: Chronic respiratory conditions, like asthma, can cause occasional slow or labored breathing. During asthma attacks or other respiratory issues, narrowing or blockage of the airways can reduce airflow and lower respiratory rate."<<std::endl;
                std::cout<<"-Cause:Inflammation or narrowing of the airways makes it harder for air to pass through, which may cause slower or more shallow breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Hypoventilation (Inadequate Breathing)**"<<std::endl;
                std::cout<<"-Explanation:** Hypoventilation occurs when breathing is insufficient, meaning not enough oxygen is being brought into the body and carbon dioxide is not being expelled properly. This can be caused by central nervous system disorders, medication use (e.g., sedatives), or respiratory muscle weakness."<<std::endl;
                std::cout<<"-Cause:** When the nervous system or respiratory muscles fail to properly control breathing, this results in a reduction in the depth and rate of breathing, leading to hypoventilation."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Cardiovascular Problems**"<<std::endl;
                std::cout<<"-Explanation:** Heart failure or other cardiovascular issues may impair the heart's ability to pump oxygenated blood throughout the body, which can result in a decreased respiratory rate. Insufficient oxygen supply to tissues can cause the respiratory system to slow down."<<std::endl;
                std::cout<<"-Cause: The heart is unable to pump oxygenated blood efficiently, leading to lower oxygen levels in the body and, as a result, slower breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Medications or Anesthesia"<<std::endl;
                std::cout<<"-Explanation:** Certain medications, especially sedatives, narcotics, or anesthesia, can slow down the respiratory rate. This is usually a temporary effect, and the respiratory rate will return to normal once the effects of the drugs wear off. Children under anesthesia may have slower breathing as their muscles relax and their body goes into a more subdued state."<<std::endl;
                std::cout<<"-Cause: Sedative drugs or anesthesia depress the central nervous system, reducing the activity of the respiratory centers in the brain, which slows down breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Symptoms Associated with Decreased Respiratory Rate:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Sleep State"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Deep sleep or drowsy state."<<std::endl;
                std::cout<<"-Slower, more relaxed breathing."<<std::endl;
                std::cout<<"-If the child is normally active but is asleep, this decrease in respiratory rate is generally normal."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Body Temperature and Environmental Conditions**"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Cold hands and feet."<<std::endl;
                std::cout<<"-Shivering, or the feeling of being cold."<<std::endl;
                std::cout<<"-Low body temperature (hypothermia), sluggishness, and slower breathing."<<std::endl;
                std::cout<<"-Cold skin, particularly around the lips or fingertips, turning blue (cyanosis)."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Slowing Metabolism (Serious Illnesses or Infections)"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Fatigue, excessive sleepiness, or sluggish behavior."<<std::endl;
                std::cout<<"-Fever, headache, chills, or sweating."<<std::endl;
                std::cout<<"-General discomfort, lack of energy, and difficulty staying awake."<<std::endl;
                std::cout<<"-Pale skin, general lethargy, and weakness."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Respiratory Obstruction and Asthma"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Wheezing (whistling sound during breathing), especially while exhaling."<<std::endl;
                std::cout<<"-Difficulty breathing, chest tightness."<<std::endl;
                std::cout<<"-Shortness of breath, particularly at night or after physical activity."<<std::endl;
                std::cout<<"-Coughing, especially during or after exertion."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Hypoventilation (Inadequate Breathing)"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Shallow, irregular breathing."<<std::endl;
                std::cout<<"-Cyanosis (blue skin, particularly lips or fingertips)."<<std::endl;
                std::cout<<"-Difficulty breathing, or brief periods of no breathing."<<std::endl;
                std::cout<<"-Fatigue, excessive tiredness, or shortness of breath."<<std::endl;
                std::cout<<"-The child may appear pale, weak, or unresponsive."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Cardiovascular Problems"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Fatigue, exhaustion, or rapid tiredness during activity."<<std::endl;
                std::cout<<"-Chest pain or tightness."<<std::endl;
                std::cout<<"-Shortness of breath, especially when engaging in any physical activity."<<std::endl;
                std::cout<<"-Cyanosis (blue skin, especially around the lips or fingers)."<<std::endl;
                std::cout<<"-The child may appear pale and exhausted, with reduced energy levels."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Medications or Anesthesia"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Deep sleep or difficulty waking up."<<std::endl;
                std::cout<<"-Lack of response or reflex loss."<<std::endl;
                std::cout<<"-Dizziness, muscle weakness, and limited movement."<<std::endl;
                std::cout<<"-Shallow or slow breathing."<<std::endl;
                std::cout<<"-Decreased responsiveness or lethargy."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"When to Be Concerned:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"If a child’s respiratory rate decreases below 22 and is accompanied by any of the following symptoms, medical attention should be sought immediately:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Cyanosis(bluish discoloration of the lips, face, or fingertips)."<<std::endl;
                std::cout<<"-Severe difficulty breathing, including the child struggling to take breaths or appearing to stop breathing."<<std::endl;
                std::cout<<"-Lethargy or unresponsiveness, especially when the child is awake and not in a resting state."<<std::endl;
                std::cout<<"-Chest tightness ,pain, or a feeling of suffocation."<<std::endl;
                std::cout<<"-Rapid decline in activity levels, or increased irritability."<<std::endl;
                std::cout<<"\n";
                std::cout<<" Children’s respiratory problems can deteriorate quickly, so if there are any signs of respiratory distress or if the child seems unusually tired, unresponsive, or struggling to breathe, it is important to consult a healthcare professional promptly."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"This provides a thorough explanation of the potential causes and symptoms related to a decreased respiratory rate in children aged 4-6, along with when to seek medical attention. If any of the concerning symptoms are present, it is crucial to seek medical help as soon as possible."<<std::endl;
 
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;
            }
            else if(o>34){
                std::cout<<" Causes of Respiratory Rate Above 34 in Children Aged 4-6:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Fever and Infections"<<std::endl;
                std::cout<<" -Explanation: An increase in body temperature (fever) raises metabolism, which can lead to an elevated respiratory rate. Respiratory infections, such as viral (e.g., the common cold or flu) or bacterial infections (e.g., pneumonia), can cause rapid breathing."<<std::endl;
                std::cout<<" -Cause: Fever is a sign that the body is fighting an infection, and this process increases the metabolic rate, which in turn increases the need for oxygen and causes faster breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Asthma and Other Chronic Respiratory Diseases"<<std::endl;
                std::cout<<" -Explanation: Chronic respiratory conditions, such as asthma, bronchitis, or other respiratory illnesses, can cause fast breathing, especially when the airways are narrowed or inflamed."<<std::endl;
                std::cout<<" -Cause: Asthma and similar diseases cause airway obstruction, making it harder to breathe and increasing the body’s demand for oxygen. The body compensates by breathing faster."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Anemia (Low Red Blood Cell Count)"<<std::endl;
                std::cout<<"-Explanation: Anemia, where there are not enough healthy red blood cells to carry oxygen, can cause the body to breathe faster in an attempt to increase oxygen intake."<<std::endl;
                std::cout<<"-Cause: Low hemoglobin levels in the blood mean that oxygen is not being delivered efficiently to tissues, prompting the body to speed up breathing to compensate for the lack of oxygen."<<std::endl;
                std::cout<<"\n";
                std::cout<<" Acute Conditions (High Heart Rate, Shock, Hypoxia)"<<std::endl;
                std::cout<<" -Explanation: Sudden oxygen deprivation (hypoxia) or problems with the cardiovascular system, such as shock or heart failure, can lead to an increased respiratory rate. When the body does not receive enough oxygen, the respiratory rate increases to try and compensate."<<std::endl;
                std::cout<<" -Cause: Low oxygen levels in the blood (hypoxia) trigger a reflex response to increase breathing in order to take in more oxygen. Shock and heart problems can also impair oxygen delivery, leading to faster breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Anxiety, Stress, or Pain"<<std::endl;
                std::cout<<"-Explanation: Psychological factors such as anxiety, fear, or pain can also cause rapid breathing in children. These factors trigger the release of stress hormones (e.g., adrenaline), which increase heart rate and breathing."<<std::endl;
                std::cout<<"-Cause: When the body is under stress or in pain, the autonomic nervous system reacts by increasing the heart rate and respiratory rate to prepare for “fight or flight” responses.Metabolic Disorders"<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Explanation: Metabolic conditions such as diabetic ketoacidosis, hyperthyroidism, or other metabolic imbalances can increase the body’s need for oxygen, leading to faster breathing."<<std::endl;
                std::cout<<"-Cause: These conditions either cause the body to produce excess acids (e.g., in ketoacidosis) or increase metabolism, which heightens the demand for oxygen and accelerates breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Poisoning or Medication Side Effects"<<std::endl;
                std::cout<<"Explanation: Exposure to toxic substances like carbon monoxide or an overdose of certain medications (e.g., painkillers or sedatives) can lead to an increase in respiratory rate."<<std::endl;
                std::cout<<"Cause: Toxic substances or overdoses can disrupt the body’s ability to use oxygen, leading to an increase in breathing as the body attempts to get more oxygen into the bloodstream."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Symptoms Associated with Respiratory Rate Above 34:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Fever and Infections"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-High fever (38°C / 100.4°F and above)."<<std::endl;
                std::cout<<"-Fatigue, body aches, sweating."<<std::endl;
                std::cout<<"-Cough, nasal congestion, sore throat (depending on the type of infection)."<<std::endl;
                std::cout<<"-Pneumonia or severe infections may present with wheezing, productive cough, and difficulty breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Asthma and Other Chronic Respiratory Diseases"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Wheezing (a whistling sound when breathing)."<<std::endl;
                std::cout<<"-Chest tightness, difficulty breathing."<<std::endl;
                std::cout<<"-Fatigue and rapid tiring during physical activity."<<std::endl;
                std::cout<<"-Coughing spells, especially at night or early in the morning."<<std::endl;
                std::cout<<"-Use of accessory muscles for breathing (neck or chest muscles becoming more prominent)."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Anemia (Low Red Blood Cells)"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Fatigue, weakness."<<std::endl;
                std::cout<<"-Pale skin or pallor."<<std::endl;
                std::cout<<"-Dizziness, lightheadedness, or fainting."<<std::endl;
                std::cout<<"-Shortness of breath with minimal physical activity."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Acute Conditions (High Heart Rate, Shock, Hypoxia)"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Severe difficulty breathing, cyanosis (blue color around lips or nails)."<<std::endl;
                std::cout<<"-Cold sweats, pale or mottled skin."<<std::endl;
                std::cout<<"-Weakness or fainting, confusion, or loss of consciousness."<<std::endl;
                std::cout<<"-Rapid heart rate (tachycardia)."<<std::endl;
                std::cout<<"-Weak or thready pulse, low blood pressure (in shock)."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Anxiety, Stress, or Pain"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Rapid, shallow breathing (hyperventilation)."<<std::endl;
                std::cout<<"-Restlessness, crying, or visible fear."<<std::endl;
                std::cout<<"-Nausea, dizziness, or lightheadedness."<<std::endl;
                std::cout<<"-Clenched fists, tensed body, or other signs of anxiety or stress."<<std::endl;
                std::cout<<" -Pain-induced rapid breathing, particularly if the child is injured or experiencing discomfort."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Metabolic Disorders"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Fruity-smelling breath (in diabetic ketoacidosis)."<<std::endl;
                std::cout<<"-High fever, excessive thirst."<<std::endl;
                std::cout<<"-Abdominal pain, vomiting."<<std::endl;
                std::cout<<"-Confusion, difficulty concentrating, or loss of consciousness."<<std::endl;
                std::cout<<" -Increased urination, extreme fatigue."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Poisoning or Medication Side Effects"<<std::endl;
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Dizziness, nausea, vomiting."<<std::endl;
                std::cout<<"-Cyanosis (blue color in the skin, particularly around lips or nails)."<<std::endl;
                std::cout<<"-Difficulty breathing or a sense of suffocation."<<std::endl;
                std::cout<<"-Excessive sweating, confusion, or loss of consciousness."<<std::endl;
                std::cout<<"-Poisoning from substances like carbon monoxide or drug overdoses may present with altered mental status."<<std::endl;
                std::cout<<"\n";
                std::cout<<"When to Seek Medical Attention:"<<std::endl;
                std::cout<<"If a child’s respiratory rate exceeds 34 and is accompanied by any of the following symptoms, medical attention should be sought immediately:"<<std::endl;
                std::cout<<"-Cyanosis (bluish discoloration of the lips, face, or nails)."<<std::endl;
                std::cout<<"-Severe difficulty breathing, such as struggling to take breaths or appearing to stop breathing."<<std::endl;
                std::cout<<"-Dizziness, confusion, or loss of consciousness."<<std::endl;
                std::cout<<"-Chest pain, tightness, or feeling of suffocation."<<std::endl;
                std::cout<<"-Rapid decline in activity levels or increased irritability."<<std::endl;
                std::cout<<"-Children are particularly vulnerable to respiratory problems, and their condition can deteriorate quickly. If the child exhibits any signs of respiratory distress, or if they appear unusually tired, unresponsive, or are struggling to breathe, it is important to seek prompt medical attention."<<std::endl;
 
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;
            }
        }
    }
    if(cinsiyet=="man" || cinsiyet=="woman"){
        if(y==6 || y==7|| y==8  || y==9 || y==10|| y==11 ){
            if(o>=22 && 0<=34){
                std::cout<<" Human is healthy"<<std::endl;
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;
 
 }
            else if(o<22){
                std::cout<<"If a child between the ages of 6 and 12 has a respiratory rate lower than 22 breaths per minute, it can indicate bradypnea (abnormally slow breathing), which may be a sign of a serious underlying condition. The normal respiratory rate for children in this age group is typically between 18 and 22 breaths per minute. A rate below 22 could suggest that the body isn t getting enough oxygen, leading to various health risks."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Causes:"<<std::endl;
                std::cout<<"Respiratory Failure:"<<std::endl;
                std::cout<<"-Conditions like pneumonia, asthma, or other lung diseases can cause a reduced respiratory rate."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Neurological Issues:"<<std::endl;
                std::cout<<"-Damage to the brain's respiratory centers (due to head trauma or neurological disorders) can lower breathing rates."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Metabolic Acidosis:"<<std::endl;
                std::cout<<"-Alow blood pH (acidic blood) due to conditions like kidney failure or severe dehydration can slow down breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Medication or Drug Use:"<<std::endl;
                std::cout<<"-Certain medications or substances, such as opioids or sedatives, can depress the respiratory centers in the brain, leading to slower breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Excessive Fatigue or Sleep:"<<std::endl;
                std::cout<<"-When a child is very tired or asleep, their respiratory rate may naturally slow down."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Heart Failure:"<<std::endl;
                std::cout<<"-If the heart is not pumping blood effectively, it can affect oxygen delivery to the body, leading to a decreased respiratory rate."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"Shallow or Labored Breathing:"<<std::endl;
                std::cout<<"-The child may struggle to take deep breaths or may exhibit shallow breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Cyanosis (Bluish Skin or Lips):"<<std::endl;
                std::cout<<"-Bluish discoloration of the lips, face, or extremities may occur due to low oxygen levels in the blood."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Rapid or Weak Pulse:"<<std::endl;
                std::cout<<"-A slow respiratory rate can affect heart function, leading to a fast or weak pulse."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Mental Status Changes:"<<std::endl;
                std::cout<<"-Oxygen deficiency can cause confusion, dizziness, fatigue, or even fainting."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Visible Chest Retractions:"<<std::endl;
                std::cout<<"-The child may show signs of difficulty breathing, such as chest muscles visibly pulling in with each breath."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Fatigue and Weakness:"<<std::endl;
                std::cout<<"-Lack of adequate oxygen may result in the child feeling unusually tired or weak."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Increased Depth of Breathing:"<<std::endl;
                std::cout<<"-The body may try to compensate for the slow breathing by increasing the depth of each breath."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Loss of Consciousness:"<<std::endl;
                std::cout<<"-Prolonged oxygen deprivation can lead to fainting or even a loss of consciousness."<<std::endl;
                std::cout<<"\n";
                std::cout<<" Consequences and Risks:"<<std::endl;
                std::cout<<" Hypoxia (Low Oxygen Levels):"<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"-When the body doesn t get enough oxygen, vital organs like the brain, heart, and kidneys may not function properly."<<std::endl;
                std::cout<<"-Hypercapnia (Excess Carbon Dioxide):"<<std::endl;
                std::cout<<"-Slowed breathing can result in the accumulation of carbon dioxide in the blood, leading to respiratory acidosis, which can further impair brain function."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Organ Damage:"<<std::endl;
                std::cout<<"-Prolonged lack of oxygen can cause damage to vital organs such as the heart, brain, and kidneys."<<std::endl;
                std::cout<<"-If a child’s respiratory rate drops below 22 breaths per minute, it is important to seek immediate medical attention. The underlying cause should be identified and treated promptly to prevent serious complications."<<std::endl;
            }
            else if(o>34){
                std::cout<<"If a child between the ages of 6 and 12 has a respiratory rate above 34 breaths per minute, it is considered tachypnea (abnormally fast breathing), which can also indicate an underlying health problem. Tachypnea is often a response to stress on the body, such as an illness or a metabolic imbalance, and it can be a sign of respiratory distress."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Causes:"<<std::endl;
                std::cout<<"Respiratory Infections:"<<std::endl;
                std::cout<<"Pneumonia, bronchitis, upper respiratory infections, or asthma exacerbations can cause increased breathing rate as the body tries to get more oxygen due to reduced lung function."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Fever:"<<std::endl;
                std::cout<<"-High body temperature from infections or other illnesses increases the body’s demand for oxygen, leading to faster breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Anxiety or Panic Attacks:"<<std::endl;
                std::cout<<"-Emotional stress, fear, or panic attacks can cause rapid breathing (also known as hyperventilation) in children."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Heart Failure:"<<std::endl;
                std::cout<<"-Conditions like congestive heart failure can cause fluid buildup in the lungs (pulmonary edema), making breathing harder and faster to compensate for the lack of oxygen."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Metabolic Acidosis:"<<std::endl;
                std::cout<<"-In conditions like diabetic ketoacidosis (DKA) or kidney failure, the body may breathe faster in an attempt to blow off excess carbon dioxide and compensate for an acidic environment in the blood."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Pulmonary Conditions:"<<std::endl;
                std::cout<<"-Chronic conditions like chronic obstructive pulmonary disease (COPD), pulmonary embolism, or even an asthma attack can trigger rapid breathing as the lungs struggle to exchange oxygen and carbon dioxide."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Pain:"<<std::endl;
                std::cout<<"-Severe pain, such as from an injury or after surgery, can increase respiratory rate as part of the body’s response to stress."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Anemia:"<<std::endl;
                std::cout<<"-If a child has low red blood cell count (anemia), the body compensates for the reduced oxygen-carrying capacity by increasing the respiratory rate."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Sepsis:"<<std::endl;
                std::cout<<"-Sepsis (a widespread infection throughout the body) can cause rapid breathing as the body attempts to fight off infection and maintain oxygen levels.)"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Symptoms:"<<std::endl;
                std::cout<<"-Increased Breathing Effort:"<<std::endl;
                std::cout<<"The child may show signs of using accessory muscles (neck and chest muscles) to breathe, and their breathing may appear labored or shallow."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Cyanosis (Bluish Skin or Lips):"<<std::endl;
                std::cout<<"-A very high respiratory rate, especially if it s causing inadequate oxygen exchange, can lead to bluish discoloration of the lips, face, or extremities."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Sweating:"<<std::endl;
                std::cout<<"-The child may sweat more than usual, especially if the rapid breathing is due to fever or an infection."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Restlessness or Agitation:"<<std::endl;
                std::cout<<"-The child may appear anxious or restless due to difficulty breathing or feeling short of breath."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Rapid Heart Rate (Tachycardia):"<<std::endl;
                std::cout<<"-Increased respiratory rate is often accompanied by an increased heart rate as the body tries to compensate for lower oxygen levels."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Nausea or Vomiting:"<<std::endl;
                std::cout<<"-Tachypnea, especially due to metabolic or respiratory issues, can cause the child to feel nauseous or may lead to vomiting."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Fatigue and Weakness:"<<std::endl;
                std::cout<<"Prolonged rapid breathing can lead to exhaustion, as the body is working harder than usual to maintain normal function."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Decreased Activity or Lethargy:"<<std::endl;
                std::cout<<"Children may become less active or overly tired because the body is expending energy trying to breathe faster and compensate for reduced oxygen levels."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Chest Pain or Tightness:"<<std::endl;
                std::cout<<"If tachypnea is due to a lung or heart problem, the child may also complain of chest discomfort or tightness, especially during breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Consequences and Risks:"<<std::endl;
                std::cout<<"Oxygen Deprivation (Hypoxia):"<<std::endl;
                std::cout<<"-Despite the increased rate of breathing, if the body is not able to get enough oxygen, it can lead to hypoxia, affecting vital organs."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Respiratory Fatigue:"<<std::endl;
                std::cout<<"-Prolonged rapid breathing can tire out the respiratory muscles, leading to respiratory failure, where the body cannot maintain normal breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Hyperventilation:"<<std::endl;
                std::cout<<"-Rapid breathing causes excessive exhalation of carbon dioxide, which can lead to a condition called respiratory alkalosis (low CO2 levels), causing symptoms like dizziness, lightheadedness, and tingling in the fingers and toes."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Cardiovascular Stress:"<<std::endl;
                std::cout<<"-Tachypnea can put strain on the heart, especially if it s due to a condition like heart failure or pulmonary embolism, which could eventually lead to cardiac issues."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Acid-Base Imbalance:"<<std::endl;
                std::cout<<"-If rapid breathing is due to metabolic causes (like diabetic ketoacidosis or kidney problems), it can cause an imbalance in the blood’s acid-base levels, leading to dangerous health consequences."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Impaired Gas Exchange:"<<std::endl;
                std::cout<<"-If the rapid rate of breathing is caused by lung diseases (e.g., asthma or pneumonia), it may not effectively exchange oxygen and carbon dioxide, leading to worsened respiratory distress."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"When to Seek Medical Help:"<<std::endl;
                std::cout<<"-If a child’s respiratory rate exceeds 34 breaths per minute, especially if it is associated with other symptoms such as chest pain, cyanosis, confusion, or significant difficulty breathing, emergency medical attention is needed. Early intervention is crucial to determine the cause of the tachypnea and to prevent further complications."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
            }
        }
    }
    if(cinsiyet=="man" || cinsiyet=="woman"){
        if(y==13 || y==14|| y==15  || y==16 || y==17){
            if(o>=12 && o<=20){
                std::cout<<" Human is healthy"<<std::endl;
 
 
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;}
            else if(o<12){
                std::cout<<"  If an adolescent (13-18 years old) has a respiratory rate below 12 breaths per minute, this condition is known as bradypnea, which is slower than the normal range for their age group (typically 12-20 breaths per minute). Bradypnea in this age group can be a sign of an underlying medical condition and requires careful evaluation."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Possible Causes of Bradypnea in Adolescents:"<<std::endl;
                std::cout<<"Central Nervous System (CNS) Depression:"<<std::endl;
                std::cout<<"-Cause: Damage to the brainstem, where the respiratory centers are located, can cause slow breathing."<<std::endl;
                std::cout<<"-Examples: Brain injury, head trauma, stroke, or increased intracranial pressure can impair normal respiratory function."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Drug Overdose:"<<std::endl;
                std::cout<<"-Cause: Sedatives, opioids, or other central nervous system depressants can reduce the drive to breathe."<<std::endl;
                std::cout<<"-Examples: Prescription drugs like painkillers (e.g., opioids) or recreational drugs (e.g., alcohol, sedatives)."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Hypoxia (Low Oxygen Levels):"<<std::endl;
                std::cout<<"-Cause: Insufficient oxygen in the blood can slow the respiratory rate as the body tries to conserve energy."<<std::endl;
                std::cout<<"-Examples: Respiratory diseases like asthma, pneumonia, or chronic obstructive pulmonary disease (COPD), or even being at high altitudes."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Hypothyroidism:"<<std::endl;
                std::cout<<"Cause: An underactive thyroid (hypothyroidism) can slow down many bodily functions, including respiration."<<std::endl;
                std::cout<<"Symptoms: This may include weight gain, fatigue, cold intolerance, and slow heart rate."<<std::endl;
                std::cout<<"-Sleep Apnea:"<<std::endl;
                std::cout<<"-Cause: Sleep disorders, such as obstructive sleep apnea, can result in periods of slow breathing during sleep."<<std::endl;
                std::cout<<"Symptoms: Interrupted sleep, loud snoring, gasping for air at night."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Electrolyte Imbalance:"<<std::endl;
                std::cout<<"-Cause: Low levels of key electrolytes such as potassium or calcium can affect muscle function, including the muscles involved in breathing."<<std::endl;
                std::cout<<"-Examples: Conditions such as dehydration, kidney problems, or excessive vomiting/diarrhea."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Cardiac Issues:"<<std::endl;
                std::cout<<"-Cause: Certain heart conditions, such as bradycardia or heart block, can also impact breathing."<<std::endl;
                std::cout<<"-Examples: Structural heart issues, arrhythmias, or poor circulation."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Metabolic Disorders:"<<std::endl;
                std::cout<<"-Cause: Imbalances in metabolic processes, such as diabetic ketoacidosis or renal failure, can lead to respiratory depression."<<std::endl;
                std::cout<<"-Symptoms: Confusion, fruity-smelling breath (in ketoacidosis), or swelling."<<std::endl;
                std::cout<<"\n";
                std::cout<<" Symptoms to Watch For:"<<std::endl;
                std::cout<<"If the adolescent has a respiratory rate below 12 breaths per minute, they may exhibit other concerning signs, including:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"-Shortness of breath (dyspnea)"<<std::endl;
                std::cout<<"-Fatigue or weakness"<<std::endl;
                std::cout<<"-Confusion or difficulty concentrating"<<std::endl;
                std::cout<<"-Blue or pale skin (cyanosis), especially around the lips or fingertips"<<std::endl;
                std::cout<<"-Irregular or abnormal breathing patterns"<<std::endl;
                std::cout<<"-Chest pain or discomfort"<<std::endl;
                std::cout<<"-Dizziness or fainting"<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"What to Do:"<<std::endl;
                std::cout<<"Immediate medical evaluation is necessary if an adolescent s breathing rate falls below 12 breaths per minute, especially if there are any associated symptoms like cyanosis, confusion, or dizziness."<<std::endl;
                std::cout<<"-The underlying cause (e.g., CNS depression, hypoxia, drug overdose, or heart issues) needs to be identified and treated promptly."<<std::endl;
                std::cout<<"-In summary, a respiratory rate below 12 breaths per minute in an adolescent could indicate a serious underlying health issue that requires medical attention."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";}
            else if (o>20){
                std::cout<<"When the respiratory rate exceeds 20 breaths per minute in adolescents (13-18 years old), this condition is called tachypnea. Tachypnea can be a sign of various physiological or pathological conditions, and it often indicates that the body is trying to compensate for a problem, such as insufficient oxygen, fever, or other stressors."<<std::endl;
                std::cout<<"\n";
                std::cout<<" Possible Causes of Tachypnea in Adolescents (Above 20 breaths per minute):"<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Fever (Pyrexia):"<<std::endl;
                std::cout<<"-Cause: When the body temperature rises due to an infection or inflammation, the body compensates by increasing the respiratory rate to help cool down and manage metabolic demands."<<std::endl;
                std::cout<<"-Examples: Common infections such as the flu, pneumonia, or COVID-19."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Anxiety or Panic Attacks:"<<std::endl;
                std::cout<<"-Cause: Anxiety or panic attacks can trigger a fight-or-flight response, which leads to rapid breathing (hyperventilation) as part of the bodyss stress response."<<std::endl;
                std::cout<<"-Symptoms: Rapid, shallow breathing, dizziness, feelings of choking, chest tightness, or heart palpitations."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"-Respiratory Infections:"<<std::endl;
                std::cout<<"-Cause: Infections in the lungs or airways can cause inflammation, obstruction, and difficulty breathing, leading to an increase in the respiratory rate."<<std::endl;
                std::cout<<"-Examples: Conditions such as pneumonia, bronchitis, asthma exacerbations, or COVID-19."<<std::endl;
                std::cout<<"-Symptoms: Coughing, wheezing, fever, chest pain, and shortness of breath."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"-Asthma Exacerbation:"<<std::endl;
                std::cout<<"-Cause: Asthma causes the airways to narrow, making it harder to breathe, and the body compensates by increasing the rate of respiration to maintain adequate oxygen levels."<<std::endl;
                std::cout<<"-Symptoms: Wheezing, chest tightness, shortness of breath, coughing, especially at night or after physical activity."<<std::endl;
                std::cout<<"\n";
                std::cout<<" Heart Failure or Cardiac Issues:"<<std::endl;
                std::cout<<"-Cause: Heart conditions like heart failure can lead to fluid build-up in the lungs, reducing the efficiency of oxygen exchange, thus increasing the respiratory rate."<<std::endl;
                std::cout<<"-Symptoms: Fatigue, swelling in the legs, shortness of breath (especially when lying flat), and a rapid or irregular heart rate."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Anemia (Low Red Blood Cell Count):"<<std::endl;
                std::cout<<"-Cause: A lack of sufficient red blood cells or hemoglobin means that oxygen is not efficiently transported throughout the body. The body compensates by breathing faster to increase oxygen intake."<<std::endl;
                std::cout<<"-Symptoms: Fatigue, dizziness, pallor, and weakness."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"-Pain:"<<std::endl;
                std::cout<<"-Cause: Acute pain (especially chest or abdominal pain) can lead to an increased respiratory rate as part of the bodyss natural response to discomfort."<<std::endl;
                std::cout<<"-Examples: Injuries, surgery recovery, or conditions like pleurisy (inflammation of the lining around the lungs)."<<std::endl;
                std::cout<<"\n";
                std::cout<<"  Respiratory Distress Syndrome:"<<std::endl;
                std::cout<<"-Cause: This condition, which can result from severe lung injury or infection, causes rapid, shallow breathing in an attempt to compensate for decreased oxygen levels."<<std::endl;
                std::cout<<"-Examples: Can occur due to trauma, drowning, or infections like severe pneumonia."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"-Acidosis:"<<std::endl;
                std::cout<<"-Cause: When the body becomes too acidic (such as in diabetic ketoacidosis or lactic acidosis), the body may increase the respiratory rate to expel excess carbon dioxide and try to restore normal pH levels."<<std::endl;
                std::cout<<"-Symptoms: Rapid breathing, confusion, fatigue, nausea, and vomiting (in the case of diabetic ketoacidosis)."<<std::endl;
                std::cout<<"\n";
                std::cout<<" Pulmonary Embolism:"<<std::endl;
                std::cout<<"-Cause: A blockage in the pulmonary artery due to a blood clot can restrict blood flow to the lungs, decreasing oxygen levels and causing an increase in the respiratory rate."<<std::endl;
                std::cout<<"-Symptoms: Sudden shortness of breath, chest pain (sharp or pleuritic), coughing up blood, and dizziness."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Sepsis:"<<std::endl;
                std::cout<<"-Cause: A severe body-wide infection can trigger a systemic inflammatory response, leading to an increased respiratory rate as part of the body’s attempt to manage the infection and maintain oxygen levels."<<std::endl;
                std::cout<<"-Symptoms: Fever, rapid heart rate, confusion, and low blood pressure."<<std::endl;
                std::cout<<"-Signs and Symptoms to Watch For Along with Tachypnea:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"If an adolescent has a respiratory rate above 20 breaths per minute, it is important to look for additional signs that might indicate a more serious condition:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"-Shortness of breath (dyspnea)"<<std::endl;
                std::cout<<"-Fatigue or weakness"<<std::endl;
                std::cout<<"-Cyanosis (bluish tint to lips, face, or extremities)"<<std::endl;
                std::cout<<"-Chest pain or tightness"<<std::endl;
                std::cout<<"-Wheezing or coughing"<<std::endl;
                std::cout<<"-Confusion or difficulty concentrating"<<std::endl;
                std::cout<<"-Dizziness or fainting"<<std::endl;
                std::cout<<"-Sweating or clammy skin"<<std::endl;
                std::cout<<"-Fever"<<std::endl;
                std::cout<<"-When to Seek Medical Help:"<<std::endl;
                std::cout<<"If tachypnea is accompanied by any of the above symptoms, or if the rapid breathing is persistent and unexplained, it is essential to seek medical attention immediately. This could be indicative of a serious health issue, and timely treatment can be crucial for the adolescent's recovery."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Summary:"<<std::endl;
                std::cout<<"Tachypnea (respiratory rate above 20 breaths per minute) in adolescents can be caused by a variety of factors, including fever, infections, anxiety, asthma, heart failure, anemia, or serious conditions like pulmonary embolism or sepsis. It s essential to monitor for additional symptoms and seek medical evaluation if the rapid breathing persists or is associated with other concerning signs."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
            }
        }
    }
    if(cinsiyet=="man" || cinsiyet=="woman"){
        if(y>=18 || y<65){
            if(o>=12 && o<=20){
                std::cout<<"Human is healthy"<<std::endl;
 
 
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;}
            else if(o<12){
                std::cout<<"A respiratory rate below 12 breaths per minute in adults is called bradypnea. It can be caused by several medical conditions and may lead to serious complications if not addressed properly."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Causes of Bradypnea:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Neurological Issues: Damage to the brainstem, which controls breathing, can cause bradypnea. Conditions like stroke, brain injury, or certain neurological diseases may affect respiratory control."<<std::endl;
                std::cout<<"Medications: Certain drugs, especially opioids (like morphine) or sedatives (like benzodiazepines), can depress the respiratory centers in the brain, leading to slow breathing."<<std::endl;
                std::cout<<" Hypothyroidism: An underactive thyroid can slow down many bodily functions, including breathing."<<std::endl;
                std::cout<<"Cardiac Issues: Conditions like heart failure or bradycardia (slow heart rate) can influence the respiratory rate."<<std::endl;
                std::cout<<"Sleep Apnea: People with sleep apnea may experience slowed breathing during sleep, and this can carry over into daytime bradypnea."<<std::endl;
                std::cout<<"Hypoxia: A lack of sufficient oxygen in the blood can sometimes slow down the respiratory rate, although this is more common in cases of severe oxygen deprivation."<<std::endl;
                std::cout<<"\n";
                std::cout<<" Potential Consequences of Bradypnea:"<<std::endl;
                std::cout<<"Hypoxia (Low Oxygen Levels): Slower breathing means the body may not be getting enough oxygen, which can lead to oxygen deprivation in vital organs like the brain, heart, and kidneys."<<std::endl;
                std::cout<<"Hypercapnia (Excess Carbon Dioxide): Reduced breathing means less carbon dioxide is expelled, leading to a buildup of CO2 in the blood. This can cause acidosis, where the blood becomes too acidic, disrupting the function of organs and systems."<<std::endl;
                std::cout<<"Organ Damage: Chronic low oxygen levels and elevated carbon dioxide can result in long-term damage to organs, particularly the brain and heart."<<std::endl;
                std::cout<<"Loss of Consciousness: Severe hypoxia or hypercapnia can cause dizziness, confusion, or even loss of consciousness."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"What to Do in Case of Bradypnea:"<<std::endl;
                std::cout<<"Seek Medical Attention: If someone s respiratory rate falls below 12 breaths per minute and remains slow, it s important to consult a healthcare provider for a proper diagnosis and treatment."<<std::endl;
                std::cout<<"Monitor for Severe Symptoms: If the breathing rate drops further (e.g., less than 8 breaths per minute), or if the person shows signs of confusion, cyanosis (bluish tint to skin), or difficulty breathing, immediate medical help should be sought."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Monitor Medication Use: If bradypnea is related to medication (like sedatives or opioids), the healthcare provider should be consulted to adjust the dosage or explore alternative treatments."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Self-Monitoring:"<<std::endl;
                std::cout<<" -Bradypnea can be detected by counting the number of breaths taken in one minute. This can be easily done by placing a hand on the chest or watching the rise and fall of the abdomen. If the breathing rate is unusually slow, this may be a sign to seek further medical evaluation."<<std::endl;
                std::cout<<"\n";
                std::cout<<"-In conclusion, bradypnea is a sign that something may be wrong with the body s respiratory or neurological system. It s important to monitor the situation closely and seek medical intervention if necessary to prevent serious complications."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
 
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;
            }
            else if(o<12){
                std::cout<<"When an adult s respiratory rate exceeds 20 breaths per minute, it is known as tachypnea. Tachypnea can occur for various reasons, often indicating an underlying medical condition. Here s a breakdown of the causes, symptoms, and the conditions where tachypnea might be observed:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Causes of Tachypnea:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Respiratory Disorders:"<<std::endl;
                std::cout<<"-Pneumonia**: Infections like pneumonia can cause the lungs to become inflamed and filled with fluid, making breathing more difficult and leading to a faster respiratory rate."<<std::endl;
                std::cout<<"-Asthma**: During asthma attacks, the airways narrow, leading to difficulty breathing and an increase in the rate of respiration."<<std::endl;
                std::cout<<"-Chronic Obstructive Pulmonary Disease (COPD)**: In conditions like COPD, especially during exacerbations, the body compensates for reduced lung function by increasing the respiratory rate."<<std::endl;
                std::cout<<"-Pulmonary Embolism**: A blood clot in the lungs can obstruct airflow, causing shortness of breath and rapid breathing."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Cardiac Issues:"<<std::endl;
                std::cout<<"-Congestive Heart Failure (CHF)**: When the heart is unable to pump blood effectively, fluid may build up in the lungs (pulmonary edema), causing shortness of breath and tachypnea."<<std::endl;
                std::cout<<"-Arrhythmias**: Abnormal heart rhythms, such as atrial fibrillation or tachycardia, can also increase the respiratory rate as the body compensates for poor circulation."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Fever and Infections:"<<std::endl;
                std::cout<<"-Fever: When the body temperature rises, the body s metabolic demands increase, which can lead to an increased respiratory rate."<<std::endl;
                std::cout<<"-Sepsis: A systemic infection that spreads throughout the body can cause an increase in breathing rate as the body attempts to deal with the infection."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Metabolic Acidosis:"<<std::endl;
                std::cout<<"-Diabetic Ketoacidosis (DKA)**: In conditions like DKA, where the body accumulates high levels of ketones and acids in the blood, tachypnea is a compensatory mechanism to blow off excess carbon dioxide and try to correct the acidic pH."<<std::endl;
                std::cout<<"-Renal Failure: Severe kidney dysfunction can lead to the buildup of toxins in the blood, causing acidosis and increasing the breathing rate as the body attempts to balance pH levels."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Pain and Anxiety:"<<std::endl;
                std::cout<<"-Pain**: Severe pain can trigger a stress response, increasing respiratory rate."<<std::endl;
                std::cout<<"-Anxiety or Panic Attacks**: Emotional distress can lead to shallow, rapid breathing as part of the body s fight-or-flight response."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Exercise or Physical Activity:"<<std::endl;
                std::cout<<"-Exercise: Physical activity naturally increases the body s demand for oxygen, leading to a faster breathing rate."<<std::endl;
                std::cout<<"-High-altitude exposure: In places with lower oxygen levels, such as high altitudes, the body compensates by increasing the respiratory rate to bring in more oxygen."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Trauma or Blood Loss:"<<std::endl;
                std::cout<<"-Hemorrhage: Significant blood loss can lead to shock, and tachypnea can occur as the body tries to compensate for reduced oxygen-carrying capacity of the blood."<<std::endl;
                std::cout<<"-Trauma**: Severe injuries, especially to the chest, lungs, or head, can lead to tachypnea as a response to pain, reduced lung capacity, or shock."<<std::endl;
                std::cout<<"\n";
                std::cout<<"Symptoms of Tachypnea:"<<std::endl;
                std::cout<<"-Shortness of breath(dyspnea)"<<std::endl;
                std::cout<<"-Shallow breathing (rapid, shallow breaths)"<<std::endl;
                std::cout<<"-Chest tightness or discomfort"<<std::endl;
                std::cout<<"-Fatigue or weakness"<<std::endl;
                std::cout<<"-Cyanosis (bluish tint to lips, face, or extremities) due to oxygen deprivation"<<std::endl;
                std::cout<<"-Confusion or disorientation(due to lack of oxygen)"<<std::endl;
                std::cout<<"-Increased heart rate (tachycardia) often accompanies tachypnea"<<std::endl;
                std::cout<<"-Sweating or feeling hot (in cases of infection or fever)"<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"When to Seek Medical Help:"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Tachypnea, particularly when accompanied by severe symptoms like chest pain, confusion, or difficulty breathing, can indicate a serious underlying condition. It is important to seek medical attention if:"<<std::endl;
                std::cout<<"-The increased respiratory rate is persistent or worsens"<<std::endl;
                std::cout<<"-There is chest pain or pressure"<<std::endl;
                std::cout<<"-There is difficulty breathing or feeling faint"<<std::endl;
                std::cout<<"-There is a bluish discoloration of lips or extremities (cyanosis)"<<std::endl;
                std::cout<<"-Symptoms are associated with a known condition, like diabetes or heart disease, that may be worsening"<<std::endl;
                std::cout<<"\n";
                std::cout<<"Summary:"<<std::endl;
                std::cout<<"Tachypnea, or an increased respiratory rate of more than 20 breaths per minute, can be a sign of various medical conditions, ranging from respiratory issues like pneumonia or asthma to metabolic disorders like diabetic ketoacidosis. It is a compensatory response by the body to conditions that either reduce oxygen levels or increase the body's metabolic demands. Monitoring other symptoms and seeking medical care when necessary is important to address the root cause of the tachypnea and prevent further complications."<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;
            }
        }
    }
                    if(cinsiyet=="man"||cinsiyet=="woman"){
                        if(y>=65){
                            if(o>=12 && o<=20){
                                std::cout<<"Human is healthy"<<std::endl;
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;}
                            else if(o<12){
                                std::cout<<" When the respiratory rate of adults over 65 falls below **12 breaths per minute**, it is known as **bradypnea**. In elderly individuals, this can be concerning and may indicate underlying health problems. Below are the possible causes, symptoms, and conditions associated with bradypnea in older adults:"<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Causes of Bradypnea in Individuals Aged 65 and Above:"<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Neurological Conditions:"<<std::endl;
                                std::cout<<"-Stroke**: A stroke can damage the brainstem, which controls the respiratory center, leading to slow breathing."<<std::endl;
                                std::cout<<"-Parkinson s Disease**: This neurodegenerative disorder can affect the autonomic functions, including breathing, causing bradypnea."<<std::endl;
                                std::cout<<"-Brain Injury or Tumors**: Any condition that affects the brain s ability to control breathing, including brain trauma or tumors near the respiratory centers, can lead to slow breathing."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Medications:"<<std::endl;
                                std::cout<<"-Opioids: Pain medications such as morphine or other narcotics can depress the respiratory system, slowing down the rate of breathing."<<std::endl;
                                std::cout<<"-Benzodiazepines: Medications used to treat anxiety or insomnia (e.g., diazepam, lorazepam) can also depress the central nervous system and slow breathing."<<std::endl;
                                std::cout<<"-Sedatives or Antidepressants: These medications may have sedative effects that can slow down the respiratory rate, especially in elderly individuals who are more sensitive to these drugs."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Hypothyroidism:"<<std::endl;
                                std::cout<<"-Underactive Thyroid (Hypothyroidism)**: A reduced level of thyroid hormones can lead to generalized slowing of bodily functions, including respiration. Elderly individuals are at higher risk for hypothyroidism, which may present with bradypnea as one of the symptoms."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Chronic Respiratory Conditions:"<<std::endl;
                                       std::cout<<"-Chronic Obstructive Pulmonary Disease (COPD)**: While COPD typically causes rapid breathing in its acute phases, in advanced stages, it can lead to respiratory depression and bradypnea, especially if there is an acute exacerbation or the condition worsens."<<std::endl;
                                       std::cout<<"-Emphysema**: As part of COPD, emphysema reduces the lung's ability to efficiently exchange gases, which might result in a slower, more labored breathing pattern in the later stages."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<" Cardiac Conditions:"<<std::endl;
                                       std::cout<<"-Heart Failure**: In cases of severe heart failure, fluid can accumulate in the lungs (pulmonary edema), leading to difficulty in breathing. Bradypnea may occur due to reduced heart output, especially when the body becomes less efficient at oxygenating tissues."<<std::endl;
                                       std::cout<<"-Bradycardia**: A slow heart rate (often below 60 beats per minute) can sometimes be linked with bradypnea in elderly people, particularly in conditions like sick sinus syndrome or heart block, where the heart’s electrical system doesn't function properly."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Sleep Apnea:"<<std::endl;
                                       std::cout<<"-Obstructive Sleep Apnea (OSA)**: In older adults, untreated sleep apnea can lead to intermittent episodes of low breathing rate during sleep. However, it can also cause daytime bradypnea if the individual remains excessively tired from poor sleep quality."<<std::endl;
                                       std::cout<<"-Central Sleep Apnea**: A condition in which the brain fails to signal the body to breathe properly during sleep, leading to slow or irregular breathing."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Metabolic or Endocrine Imbalances:**"<<std::endl;
                                       std::cout<<"-Hypoglycemia**: Low blood sugar can affect the brain's ability to regulate breathing, leading to slow or irregular breathing patterns."<<std::endl;
                                       std::cout<<"-Hypercapnia**: An excess of carbon dioxide in the blood due to respiratory issues or reduced lung function can slow the breathing rate as the body attempts to balance gas levels, especially in elderly individuals with lung or heart diseases."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Severe Infections:"<<std::endl;
                                       std::cout<<"-Sepsis: In older adults, infections that lead to sepsis can cause a significant drop in blood pressure and slow the respiratory rate as part of the body’s systemic response to infection."<<std::endl;
                                       std::cout<<"-Pneumonia: Respiratory infections like pneumonia can cause fever, fatigue, and respiratory depression in older adults, leading to bradypnea, especially if the individual has underlying chronic conditions."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Aging Process:"<<std::endl;
                                       std::cout<<"-Decreased Respiratory Drive**: As people age, the respiratory centers in the brain become less responsive to changes in oxygen and carbon dioxide levels. This can cause a naturally slower breathing rate in some older individuals."<<std::endl;
                                       std::cout<<"-Muscle Weakness**: Age-related weakening of respiratory muscles can impair breathing efficiency, potentially leading to bradypnea, particularly during rest."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Symptoms Associated with Bradypnea in Older Adults:"<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Fatigue or excessive tiredness, particularly if the body is not getting enough oxygen."<<std::endl;
                                    std::cout<<"-Shortness of breath** (dyspnea) may occur, even with minimal activity, due to insufficient lung function or oxygen intake."<<std::endl;
                                    std::cout<<"-Confusion or disorientation** due to lack of oxygen to the brain."<<std::endl;
                                    std::cout<<"-Cyanosis**: A bluish tint to the lips, face, or extremities due to oxygen deficiency."<<std::endl;
                                    std::cout<<"-Chest tightness or discomfort** if bradypnea is due to a cardiac or respiratory condition."<<std::endl;
                                    std::cout<<"-Lightheadedness** or fainting, which could result from poor oxygenation or an underlying cardiac issue."<<std::endl;
                                    std::cout<<"-Slow or irregular heart rate** (bradycardia), especially if the bradypnea is related to cardiac causes such as heart failure or bradycardia."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"When to Seek Medical Attention:"<<std::endl;
                                std::cout<<"\n";
                                    std::cout<<"Bradypnea, especially in elderly individuals, should be taken seriously. If an elderly person exhibits the following, immediate medical attention is needed:"<<std::endl;
                                    std::cout<<"-Persistent slow breathing or irregular respiratory patterns."<<std::endl;
                                    std::cout<<"-Signs of oxygen deprivation such as confusion, bluish skin or lips, or severe fatigue."<<std::endl;
                                    std::cout<<"-Shortness of breath that worsens with physical activity or rest."<<std::endl;
                                    std::cout<<"-Chest pain, tightness, or pressure, which may indicate a heart-related problem."<<std::endl;
                                    std::cout<<"-Sudden changes in behavior or mental state due to poor oxygen supply to the brain."<<std::endl;
                                std::cout<<"\n";
                                    std::cout<<"-Summary:"<<std::endl;
                                    std::cout<<"-In elderly individuals, bradypnea (a respiratory rate below 12 breaths per minute) can be caused by a range of conditions, including neurological disorders, respiratory diseases, heart conditions, metabolic imbalances, and side effects of medications. The symptoms of bradypnea may include fatigue, shortness of breath, confusion, or cyanosis. Prompt medical evaluation is crucial, as bradypnea can indicate serious health issues that may require immediate intervention."<<std::endl;
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;
                            }
                            
                            
                            else if(o>20){
                                
                                
                                std::cout<<" When the respiratory rate in individuals over the age of 65 exceeds 20 breaths per minute, it could indicate a medical condition that requires attention. In this age group, an elevated respiratory rate is typically a sign of underlying health issues, as their respiratory system may not function as efficiently as in younger adults."<<std::endl;

                                std::cout<<" Possible Causes of Elevated Respiratory Rate (>20 breaths/min) in Older Adults:"<<std::endl;

                                std::cout<<"Respiratory Infections**: Conditions like pneumonia, bronchitis, or other lung infections can increase breathing rate. These infections may lead to inflammation in the lungs, making it harder to breathe efficiently."<<std::endl;
                                std::cout<<"Symptoms**: Fever, cough, shortness of breath, chest pain, and fatigue."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Congestive Heart Failure (CHF)**: In older adults, heart failure can result in fluid buildup in the lungs, making it harder to breathe and causing an increase in respiratory rate."<<std::endl;
                                std::cout<<"-Symptoms**: Shortness of breath, swelling in the legs and ankles, fatigue, and rapid or irregular heartbeat."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Chronic Obstructive Pulmonary Disease (COPD)**: This group of diseases, including emphysema and chronic bronchitis, often leads to difficulty in breathing and a faster respiratory rate, especially during exacerbations."<<std::endl;
                                std::cout<<"-Symptoms**: Chronic cough, wheezing, shortness of breath, and fatigue."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Acute Respiratory Distress Syndrome (ARDS)**: A severe condition often due to infection, trauma, or other causes, leading to rapid breathing, low oxygen levels, and fluid accumulation in the lungs."<<std::endl;
                                std::cout<<"-Symptoms**: Extreme shortness of breath, confusion, rapid breathing, and bluish skin."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Pulmonary Embolism (PE)**: A blood clot in the lungs can cause sudden, rapid breathing as the body tries to get enough oxygen."<<std::endl;
                                std::cout<<"-Symptoms**: Sudden shortness of breath, chest pain, coughing up blood, dizziness, and fainting."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Anxiety and Stress**: In older adults, anxiety or panic attacks can also lead to rapid breathing as the body reacts to stress."<<std::endl;
                                std::cout<<"-Symptoms**: Hyperventilation, chest tightness, dizziness, and a feeling of choking."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Metabolic Acidosis**: Conditions such as diabetic ketoacidosis (DKA) or kidney failure can cause the body to increase the respiratory rate in an effort to correct the acid-base balance."<<std::endl;
                                std::cout<<"-Symptoms**: Rapid breathing, confusion, fatigue, nausea, and fruity-smelling breath."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Sepsis**: A severe systemic infection can cause increased respiratory rate as part of the body's response to infection and inflammation."<<std::endl;
                                std::cout<<"-Symptoms**: Fever, chills, confusion, rapid heart rate, and low blood pressure."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Potential Outcomes and Consequences of Persistently Elevated Respiratory Rate:"<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"\n";
                                std::cout<<"Hypoxia (Low Oxygen Levels)**: Persistent rapid breathing can lead to oxygen imbalances in the body, causing the brain and other vital organs to be deprived of necessary oxygen."<<std::endl;
                                std::cout<<"-Consequences**: Confusion, lethargy, and even organ failure in severe cases."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Fatigue and Weakness**: Chronic elevated respiratory rate can lead to physical exhaustion as the body works harder to breathe."<<std::endl;
                                std::cout<<"-Consequences**: Decreased mobility, reduced ability to perform daily tasks, and overall decline in quality of life."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"Cardiovascular Strain**: The increased breathing effort can put additional stress on the heart, especially in individuals with pre-existing heart conditions, exacerbating heart failure or other cardiac diseases."<<std::endl;
                                std::cout<<"\n";
                                std::cout<<"ncreased Risk of Respiratory Failure**: If the underlying cause of the elevated respiratory rate is not treated, it could progress to respiratory failure, where the body is unable to maintain adequate oxygen levels in the blood."<<std::endl;
                                std::cout<<"Consequences**: Severe complications, including organ failure and death."<<std::endl;

                                std::cout<<"Key Signs to Watch For:"<<std::endl;

                                std::cout<<"-Shortness of breath** (dyspnea)"<<std::endl;
                                std::cout<<"-Coughing** (especially if accompanied by mucus or blood)"<<std::endl;

                                std::cout<<"-Chest pain or tightness"<<std::endl;
                                std::cout<<"-Confusion or difficulty concentrating"<<std::endl;
                                std::cout<<"-Bluish skin or lips (cyanosis)"<<std::endl;
                                std::cout<<"-Fatigue or weakness"<<std::endl;
                                std::cout<<"-Dizziness or faintin"<<std::endl;

                                std::cout<<" If an elderly person exhibits an elevated respiratory rate above 20 breaths per minute consistently, it is crucial to seek medical attention immediately to determine the cause and initiate appropriate treatment. Prompt intervention can prevent serious complications and improve outcomes."<<std::endl;
 std::cout<<"\n";
     cout<<left<<setw(12)<<"yaş değeri"<<setw(12)<<"solunum hızı"<<std::endl;
     cout<<left<<setw(12)<<y<<setw(12)<<o<<std::endl;
                            }
                            
                            
                            
                            
                            
                            
        }
        }
}






