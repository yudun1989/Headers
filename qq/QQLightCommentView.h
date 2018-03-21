//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QZAutoPlayGifViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, QQMessageModel, UIImage;

@interface QQLightCommentView : UIView <QZAutoPlayGifViewDelegate>
{
    UIView *_bgView;
    UIView *_roundedView;
    NSArray *_showArray;
    NSMutableArray *_gifArray;
    NSNumber *_isFace;
    _Bool _isShow;
    float _cellYPostion;
    NSDictionary *_data;
    QQMessageModel *_msgModel;
    UIImage *_detectorImage;
    NSString *_reportSource;
}

@property(retain, nonatomic) NSMutableArray *gifArray; // @synthesize gifArray=_gifArray;
@property(retain, nonatomic) NSString *reportSource; // @synthesize reportSource=_reportSource;
@property(retain, nonatomic) UIImage *detectorImage; // @synthesize detectorImage=_detectorImage;
@property(nonatomic) float cellYPostion; // @synthesize cellYPostion=_cellYPostion;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void)handleStatusBarOrientationChange:(id)arg1;
- (void)dealloc;
- (_Bool)drawFaceWithImageView:(id)arg1;
- (void)closeAnimation;
- (void)stopGifPlay;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleBgTap;
- (void)handleSingleTap:(id)arg1;
- (void)handleLongTap:(id)arg1;
- (void)gifPlayToEnd:(id)arg1;
- (void)gifDownloadFailure:(id)arg1;
- (void)gifDownloadSuccess:(id)arg1;
- (void)closeLightCommentView;
- (void)updateYPostion;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (_Bool)updateUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

