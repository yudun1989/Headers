//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GSProfileInfo, NSMutableString, NSString, NearbyFriendCellTag, UIImageView;

@interface GreetingPersonInfoView : UIView
{
    NSMutableString *_accessibilityString;
    int _xo;
    NSString *_uin;
    GSProfileInfo *_personInfo;
    NearbyFriendCellTag *_showTag1;
    NearbyFriendCellTag *_showTag2;
    NearbyFriendCellTag *_showTag3;
    NearbyFriendCellTag *_showTag4;
    UIImageView *_showTag5;
    NearbyFriendCellTag *_showTag6;
    double _layoutMaxX;
}

@property(nonatomic) double layoutMaxX; // @synthesize layoutMaxX=_layoutMaxX;
- (id)getConstellattion:(int)arg1;
- (void)layoutByInfoNew:(id)arg1;
- (id)getAccessibilityString;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) NSMutableString *accessibilityString; // @dynamic accessibilityString;
@property(retain, nonatomic) GSProfileInfo *personInfo; // @dynamic personInfo;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end

