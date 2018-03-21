//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZDanmaku.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>

@class NSString, QZAvatarView, QZRichTextLabel;

@interface QZVideoDanmaku : QZDanmaku <CAAnimationDelegate>
{
    double _lineHeight;
    double _contentLeftMargin;
    double _contentRightMargin;
    double _contentTopMargin;
    double _contentBottomMargin;
    CDUnknownBlockType _finishBlk;
    QZAvatarView *_avatarView;
    QZRichTextLabel *_contentLabel;
}

@property(retain, nonatomic) QZRichTextLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) QZAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) CDUnknownBlockType finishBlk; // @synthesize finishBlk=_finishBlk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

