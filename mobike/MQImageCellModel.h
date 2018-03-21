//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQCellModelProtocol-Protocol.h"

@class NSDate, NSString, UIImage;
@protocol MQCellModelDelegate;

@interface MQImageCellModel : NSObject <MQCellModelProtocol>
{
    BOOL _sendStatus;
    NSString *_messageId;
    NSString *_userName;
    id <MQCellModelDelegate> _delegate;
    double _cellHeight;
    UIImage *_image;
    NSDate *_date;
    NSString *_avatarPath;
    UIImage *_avatarImage;
    UIImage *_bubbleImage;
    unsigned long long _cellFromType;
    double _cellWidth;
    struct CGRect _contentImageViewFrame;
    struct CGRect _bubbleImageFrame;
    struct CGRect _avatarFrame;
    struct CGRect _sendingIndicatorFrame;
    struct CGRect _loadingIndicatorFrame;
    struct CGRect _sendFailureFrame;
}

@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) BOOL sendStatus; // @synthesize sendStatus=_sendStatus;
@property(nonatomic) unsigned long long cellFromType; // @synthesize cellFromType=_cellFromType;
@property(nonatomic) struct CGRect sendFailureFrame; // @synthesize sendFailureFrame=_sendFailureFrame;
@property(nonatomic) struct CGRect loadingIndicatorFrame; // @synthesize loadingIndicatorFrame=_loadingIndicatorFrame;
@property(nonatomic) struct CGRect sendingIndicatorFrame; // @synthesize sendingIndicatorFrame=_sendingIndicatorFrame;
@property(nonatomic) struct CGRect avatarFrame; // @synthesize avatarFrame=_avatarFrame;
@property(nonatomic) struct CGRect bubbleImageFrame; // @synthesize bubbleImageFrame=_bubbleImageFrame;
@property(copy, nonatomic) UIImage *bubbleImage; // @synthesize bubbleImage=_bubbleImage;
@property(copy, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(copy, nonatomic) NSString *avatarPath; // @synthesize avatarPath=_avatarPath;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) struct CGRect contentImageViewFrame; // @synthesize contentImageViewFrame=_contentImageViewFrame;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) __weak id <MQCellModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)updateOutgoingAvatarImage:(id)arg1;
- (void)updateCellMessageDate:(id)arg1;
- (void)updateCellMessageId:(id)arg1;
- (void)updateCellSendStatus:(BOOL)arg1;
- (id)getCellMessageId;
- (_Bool)isServiceRelatedCell;
- (id)getCellDate;
- (id)getCellWithReuseIdentifier:(id)arg1;
- (double)getCellHeight;
- (void)setModelsWithContentImage:(id)arg1 cellFromType:(unsigned long long)arg2 cellWidth:(double)arg3;
- (id)initCellModelWithMessage:(id)arg1 cellWidth:(double)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

