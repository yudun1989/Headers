//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, QQMessageModel;

@interface PTTSendModel : NSObject
{
    NSNumber *_msgID;
    NSNumber *_duration;
    NSNumber *_msgSeq;
    NSNumber *_pacSeq;
    NSNumber *_pacNum;
    NSNumber *_type;
    NSNumber *_peerUin;
    NSNumber *_layer;
    NSNumber *_reSendCount;
    NSNumber *_totalSize;
    NSNumber *_currentSize;
    NSNumber *_sendEnd;
    NSNumber *_sendTime;
    NSNumber *_RDMTime;
    int _reSendPackCount;
    NSString *_uuid;
    NSString *_fullPath;
    NSString *_dataMsgID;
    NSString *_fileKey;
    QQMessageModel *_model;
    int _xo;
}

- (void).cxx_destruct;
- (id)initWithSendModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSNumber *RDMTime; // @dynamic RDMTime;
@property(retain, nonatomic) NSNumber *currentSize; // @dynamic currentSize;
@property(retain, nonatomic) NSString *dataMsgID; // @dynamic dataMsgID;
@property(retain, nonatomic) NSNumber *duration; // @dynamic duration;
@property(retain, nonatomic) NSString *fileKey; // @dynamic fileKey;
@property(retain, nonatomic) NSString *fullPath; // @dynamic fullPath;
@property(retain, nonatomic) NSNumber *layer; // @dynamic layer;
@property(retain, nonatomic) QQMessageModel *model; // @dynamic model;
@property(retain, nonatomic) NSNumber *msgID; // @dynamic msgID;
@property(retain, nonatomic) NSNumber *msgSeq; // @dynamic msgSeq;
@property(retain, nonatomic) NSNumber *pacNum; // @dynamic pacNum;
@property(retain, nonatomic) NSNumber *pacSeq; // @dynamic pacSeq;
@property(retain, nonatomic) NSNumber *peerUin; // @dynamic peerUin;
@property(retain, nonatomic) NSNumber *reSendCount; // @dynamic reSendCount;
@property(nonatomic) int reSendPackCount; // @dynamic reSendPackCount;
@property(retain, nonatomic) NSNumber *sendEnd; // @dynamic sendEnd;
@property(retain, nonatomic) NSNumber *sendTime; // @dynamic sendTime;
@property(retain, nonatomic) NSNumber *totalSize; // @dynamic totalSize;
@property(retain, nonatomic) NSNumber *type; // @dynamic type;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

