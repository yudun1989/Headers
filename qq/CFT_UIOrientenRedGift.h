//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UIRedGiftView.h>

@class NSArray, NSMutableArray, NSString, UIImageView;

@interface CFT_UIOrientenRedGift : CFT_UIRedGiftView
{
    UIImageView *_exprBgImgview;
    NSArray *_uinArray;
    NSString *_groupid;
    NSString *_grouptype;
    NSMutableArray *_faceViewArray;
    NSMutableArray *_faceBgViewArray;
    NSMutableArray *_nameLabelArray;
    UIImageView *_topWatermarkView;
    UIImageView *_iconView;
    UIImageView *_bottomWaterImgView;
}

@property(retain, nonatomic) UIImageView *bottomWaterImgView; // @synthesize bottomWaterImgView=_bottomWaterImgView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *topWatermarkView; // @synthesize topWatermarkView=_topWatermarkView;
@property(retain, nonatomic) NSMutableArray *nameLabelArray; // @synthesize nameLabelArray=_nameLabelArray;
@property(retain, nonatomic) NSMutableArray *faceBgViewArray; // @synthesize faceBgViewArray=_faceBgViewArray;
@property(retain, nonatomic) NSMutableArray *faceViewArray; // @synthesize faceViewArray=_faceViewArray;
@property(retain, nonatomic) NSString *grouptype; // @synthesize grouptype=_grouptype;
@property(retain, nonatomic) NSString *groupid; // @synthesize groupid=_groupid;
@property(retain, nonatomic) NSArray *uinArray; // @synthesize uinArray=_uinArray;
- (void)dealloc;

@end

