//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBLiveElvesBubbleModel, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface LiveRoomElvesController : NSObject
{
    _Bool _needShowBubble;
    _Bool _firstShow;
    _Bool _startupAnimation;
    UIView *_superView;
    CDUnknownBlockType _clickElves;
    NSString *_liveId;
    NSString *_accountId;
    TBLiveElvesBubbleModel *_curShowModel;
    UIImageView *_startupFrameView;
    UIImageView *_sequenceFrameView;
    double _sizeOfSeqFrameView;
    UIImageView *_bubbleBgImgView;
    UIImageView *_bubbleIconBgImgView;
    UIImageView *_bubbleIconImgView;
    UILabel *_bubbleTextLabel;
    UILabel *_bubbleTitleLabel;
    UILabel *_bubbleSubTitleLabel;
    UITapGestureRecognizer *_tapGesture;
    long long _showIdleTime;
    struct CGPoint _orginPoint;
}

@property(nonatomic) long long showIdleTime; // @synthesize showIdleTime=_showIdleTime;
@property(nonatomic) _Bool startupAnimation; // @synthesize startupAnimation=_startupAnimation;
@property(nonatomic) _Bool firstShow; // @synthesize firstShow=_firstShow;
@property(nonatomic) struct CGPoint orginPoint; // @synthesize orginPoint=_orginPoint;
@property(nonatomic) _Bool needShowBubble; // @synthesize needShowBubble=_needShowBubble;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILabel *bubbleSubTitleLabel; // @synthesize bubbleSubTitleLabel=_bubbleSubTitleLabel;
@property(retain, nonatomic) UILabel *bubbleTitleLabel; // @synthesize bubbleTitleLabel=_bubbleTitleLabel;
@property(retain, nonatomic) UILabel *bubbleTextLabel; // @synthesize bubbleTextLabel=_bubbleTextLabel;
@property(retain, nonatomic) UIImageView *bubbleIconImgView; // @synthesize bubbleIconImgView=_bubbleIconImgView;
@property(retain, nonatomic) UIImageView *bubbleIconBgImgView; // @synthesize bubbleIconBgImgView=_bubbleIconBgImgView;
@property(retain, nonatomic) UIImageView *bubbleBgImgView; // @synthesize bubbleBgImgView=_bubbleBgImgView;
@property(nonatomic) double sizeOfSeqFrameView; // @synthesize sizeOfSeqFrameView=_sizeOfSeqFrameView;
@property(retain, nonatomic) UIImageView *sequenceFrameView; // @synthesize sequenceFrameView=_sequenceFrameView;
@property(retain, nonatomic) UIImageView *startupFrameView; // @synthesize startupFrameView=_startupFrameView;
@property(retain, nonatomic) TBLiveElvesBubbleModel *curShowModel; // @synthesize curShowModel=_curShowModel;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) CDUnknownBlockType clickElves; // @synthesize clickElves=_clickElves;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
- (void).cxx_destruct;
- (void)requestIdleBubble;
- (void)openUrlAction;
- (void)clickElvesAction;
- (void)resumeElvesPostionWithAnimation:(_Bool)arg1;
- (void)moveElvesToBottomWithAnimation:(_Bool)arg1;
- (void)showElves;
- (void)hideElves;
- (void)sendMessageToElves:(id)arg1;
- (void)elvesTimeSchedule;
- (void)enableElevsShowIdleTime:(_Bool)arg1;
- (void)hideElvesBubble;
- (void)showElvesBubble:(id)arg1;
- (void)showWelcomeBubble;
- (void)setupBubbleView;
- (id)elvesView;
- (void)setupSequenceAnimationView;
- (void)setupAllViews;
- (void)dealloc;
- (id)init;

@end

