//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface AWESelectMusicTabView : UIView
{
    _Bool _isEliteVersion;
    unsigned long long _selectedIndex;
    CDUnknownBlockType _tabCompletion;
    UIView *_topLineView;
    UIView *_middleLineView;
    UIButton *_hotMusicBtn;
    UIButton *_myCollectionBtn;
}

@property(nonatomic) _Bool isEliteVersion; // @synthesize isEliteVersion=_isEliteVersion;
@property(retain, nonatomic) UIButton *myCollectionBtn; // @synthesize myCollectionBtn=_myCollectionBtn;
@property(retain, nonatomic) UIButton *hotMusicBtn; // @synthesize hotMusicBtn=_hotMusicBtn;
@property(retain, nonatomic) UIView *middleLineView; // @synthesize middleLineView=_middleLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(copy, nonatomic) CDUnknownBlockType tabCompletion; // @synthesize tabCompletion=_tabCompletion;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)myCollectionBtnClicked:(id)arg1;
- (void)hotMusicBtnClicked:(id)arg1;
- (void)hideTopLineView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isEliteVersion:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

