//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBaseViewController.h"

@class NSString, UILabel;

@interface WBPayFailedViewController : ALBaseViewController
{
    NSString *_navigationTitle;
    NSString *_infoText;
    UILabel *_infoLabel;
}

+ (id)controllerWithErrorInfo:(id)arg1 navigationTitle:(id)arg2;
+ (id)controllerWithErrorInfo:(id)arg1;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(copy, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
- (void).cxx_destruct;
- (void)leftNavigationAction;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

