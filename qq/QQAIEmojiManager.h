//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString, QQAIOMarioViewController, QQBaseChatViewController;
@protocol OS_dispatch_queue, QQAIEmojiManagerDelegate;

@interface QQAIEmojiManager : NSObject <IEngineDispatchDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    double _lastGetTime;
    NSString *_lastText;
    NSMutableSet *_sendeduuidSet;
    NSDictionary *_lastMsgInfo;
    _Bool _isFontReady;
    NSString *_fontname;
    NSMutableArray *_lastImageUrls;
    NSArray *_searchList;
    _Bool _textImageIsLoad;
    int _businessType;
    int _curPage;
    int _pageLen;
    id <QQAIEmojiManagerDelegate> _delegate;
    CDUnknownBlockType _getEmojiCompletion;
    QQBaseChatViewController *_chatViewController;
    QQAIOMarioViewController *_marioViewController;
    NSString *_curText;
    NSString *_chatType;
    NSString *_preOneText;
    NSString *_preTwoText;
}

+ (id)getInstance;
@property(nonatomic) int pageLen; // @synthesize pageLen=_pageLen;
@property(nonatomic) int curPage; // @synthesize curPage=_curPage;
@property(nonatomic) _Bool textImageIsLoad; // @synthesize textImageIsLoad=_textImageIsLoad;
@property(retain, nonatomic) NSString *preTwoText; // @synthesize preTwoText=_preTwoText;
@property(retain, nonatomic) NSString *preOneText; // @synthesize preOneText=_preOneText;
@property(retain, nonatomic) NSString *chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSString *curText; // @synthesize curText=_curText;
@property(retain, nonatomic) QQAIOMarioViewController *marioViewController; // @synthesize marioViewController=_marioViewController;
@property(nonatomic) QQBaseChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
@property(copy, nonatomic) CDUnknownBlockType getEmojiCompletion; // @synthesize getEmojiCompletion=_getEmojiCompletion;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) id <QQAIEmojiManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hidenMarioButton;
- (void)sendMarioMsg:(id)arg1;
- (void)layoutMarioPanelWithOriginY:(double)arg1;
- (_Bool)containsQQEmoji:(id)arg1;
- (void)dismissMarioPanel;
- (void)clearMarioEmojiManager;
- (void)loadMarioViewWithResult:(id)arg1;
- (void)presentMarioEmojisPanelWithString:(id)arg1 chatType:(id)arg2 delegate:(id)arg3;
- (void)presentMarioEmojisPanelWithInputText:(id)arg1 chatType:(id)arg2;
- (void)resetMarioBaseVC:(id)arg1;
- (void)reportMarioInfo:(id)arg1 md5:(id)arg2 style:(id)arg3 action:(int)arg4;
- (void)uploadMarioInfo:(id)arg1 md5:(id)arg2 aioModel:(id)arg3 chatMsgList:(id)arg4 dialogType:(int)arg5 sourceType:(int)arg6;
- (id)getTextEmojiInfo:(id)arg1 url:(id)arg2 tonkens:(id)arg3;
- (id)getEmojiInfo:(id)arg1 url:(id)arg2 sentiment:(id)arg3 coord:(id)arg4 color:(id)arg5 tonkens:(id)arg6 isStar:(_Bool)arg7 style:(long long)arg8;
- (id)getTextByTokens:(id)arg1;
- (void)asyncGetMarioEmojiResult:(id)arg1 chatType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)asyncGetMoreMarioEmoji:(CDUnknownBlockType)arg1;
- (_Bool)sendMarioEmojiCMDToSSO:(id)arg1 chatType:(id)arg2;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)resetEngine;
- (void)initAllEngines;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

