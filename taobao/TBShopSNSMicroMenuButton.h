//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, NSString, UIImageView, UILabel;

@interface TBShopSNSMicroMenuButton : UIButton
{
    UIImageView *_iconImageView;
    UILabel *_subTitleLabel;
    NSString *_actionType;
    NSString *_actionValue;
    NSDictionary *_userTrack;
}

@property(retain, nonatomic) NSDictionary *userTrack; // @synthesize userTrack=_userTrack;
@property(retain, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)invokeAction;
- (id)init;

@end

