//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface FloatView : UIView
{
    _Bool _isPageLevel;
    _Bool _showCloseButton;
    NSDictionary *_dict;
    NSString *_imgUrl;
    NSString *_action;
    double _h;
    double _w;
    double _floatTop;
    double _floatLeft;
    long long _dragMode;
    NSString *_pageName;
    NSString *_uuid;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIImageView *_contentView;
    UIImageView *_closeView;
}

@property(retain, nonatomic) UIImageView *closeView; // @synthesize closeView=_closeView;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(nonatomic) long long dragMode; // @synthesize dragMode=_dragMode;
@property(nonatomic) _Bool isPageLevel; // @synthesize isPageLevel=_isPageLevel;
@property(nonatomic) double floatLeft; // @synthesize floatLeft=_floatLeft;
@property(nonatomic) double floatTop; // @synthesize floatTop=_floatTop;
@property(nonatomic) double w; // @synthesize w=_w;
@property(nonatomic) double h; // @synthesize h=_h;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;
- (void)slideToEdge;
- (void)didPanned:(id)arg1;
- (void)onClickImage;
- (void)creatView;
- (void)closeFloatView;
- (void)pageChange:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

