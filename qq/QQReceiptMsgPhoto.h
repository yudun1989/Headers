//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBasePhoto.h>

@class NSArray, QQMessageModel;

@interface QQReceiptMsgPhoto : QQBasePhoto
{
    QQMessageModel *msgModel;
    NSArray *resModels;
}

@property(retain, nonatomic) NSArray *resModels; // @synthesize resModels;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel;
- (void)handleImageDownloadProgressNotification:(id)arg1;
- (void)handleImageDownloadStateNotification:(id)arg1;
- (void)downloadPhoto;
- (void)dealloc;

@end

