//
//  KAViewController.h
//  BullsEye
//
//  Created by Kathryn Aplin on 9/3/14.
//  Copyright (c) 2014 Kathryn Aplin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KAViewController : UIViewController

@property (nonatomic, weak) IBOutlet UISlider *slider;

- (IBAction)showAlert;
- (IBAction)sliderMoved:(UISlider *)slider;

@end
