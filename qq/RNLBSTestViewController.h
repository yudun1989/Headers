//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UISwitch, UITextField;

@interface RNLBSTestViewController : UIViewController
{
    UITextField *_latA;
    UITextField *_lonA;
    UITextField *_latB;
    UITextField *_lonB;
    UITextField *_nodeCount;
    UITextField *_adcode;
    UISwitch *_autotestSwitch;
}

@property(retain, nonatomic) UISwitch *autotestSwitch; // @synthesize autotestSwitch=_autotestSwitch;
@property(retain, nonatomic) UITextField *adcode; // @synthesize adcode=_adcode;
@property(retain, nonatomic) UITextField *nodeCount; // @synthesize nodeCount=_nodeCount;
@property(retain, nonatomic) UITextField *lonB; // @synthesize lonB=_lonB;
@property(retain, nonatomic) UITextField *latB; // @synthesize latB=_latB;
@property(retain, nonatomic) UITextField *lonA; // @synthesize lonA=_lonA;
@property(retain, nonatomic) UITextField *latA; // @synthesize latA=_latA;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)backBtnTapped:(id)arg1;

@end

