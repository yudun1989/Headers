//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NMAsynUrlImageView, NSArray, UIButton, UILabel, UITableView;
@protocol QIMRecommendFriPopDelegate;

@interface QIMRecommendFriendsPopView : UIView
{
    CDUnknownBlockType _completion;
    unsigned long long _type;
    id <QIMRecommendFriPopDelegate> _parent;
    NMAsynUrlImageView *_qimLogo;
    UIButton *_confirmButton;
    UILabel *_headLabel;
    UIView *_maskView;
    UIView *_containerView;
    NSArray *_qimNewFrdList;
    UITableView *_tablview;
}

@property(retain, nonatomic) UITableView *tablview; // @synthesize tablview=_tablview;
@property(retain, nonatomic) NSArray *qimNewFrdList; // @synthesize qimNewFrdList=_qimNewFrdList;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) NMAsynUrlImageView *qimLogo; // @synthesize qimLogo=_qimLogo;
@property(nonatomic) __weak id <QIMRecommendFriPopDelegate> parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)add;
- (void)cancel;
- (void)dismissWithComplete:(CDUnknownBlockType)arg1;
- (void)showWithComplete:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

