//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, QQMessageModel, TransferPicInfo;

@interface BasePicUploadReqInfo : NSObject
{
    long long _fromUin;
    long long _fileId;
    NSString *_uuid;
    NSDictionary *_shareAppInfo;
    TransferPicInfo *_picInfo;
    QQMessageModel *_messageModel;
    NSNumber *_startReqTime;
    int _reqNetType;
    int _retInitSize;
    int _picTransferType;
    int _uploadReqType;
    QQMessageModel *_multiMsgForwardModel;
    unsigned int _uploadOffset;
    _Bool _sendMsg;
    int _xo;
}

- (id)description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) long long fileId; // @dynamic fileId;
@property(nonatomic) long long fromUin; // @dynamic fromUin;
@property(retain, nonatomic) QQMessageModel *messageModel; // @dynamic messageModel;
@property(retain, nonatomic) QQMessageModel *multiMsgForwardModel; // @dynamic multiMsgForwardModel;
@property(retain, nonatomic) TransferPicInfo *picInfo; // @dynamic picInfo;
@property(nonatomic) int picTransferType; // @dynamic picTransferType;
@property(nonatomic) int reqNetType; // @dynamic reqNetType;
@property(nonatomic) int retInitSize; // @dynamic retInitSize;
@property(nonatomic) _Bool sendMsg; // @dynamic sendMsg;
@property(retain, nonatomic) NSDictionary *shareAppInfo; // @dynamic shareAppInfo;
@property(retain, nonatomic) NSNumber *startReqTime; // @dynamic startReqTime;
@property(nonatomic) unsigned int uploadOffset; // @dynamic uploadOffset;
@property(nonatomic) int uploadReqType; // @dynamic uploadReqType;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

