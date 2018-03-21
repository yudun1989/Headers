//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MOBILEBILLBillModel, MOBILEBILLRecordModel, MOBILEBILLStatistModel, NSDate, NSString;

@interface MOBILEBILLContactModel : NSObject
{
    NSString *_contactDataType;
    MOBILEBILLBillModel *_billModel;
    MOBILEBILLRecordModel *_recordModel;
    MOBILEBILLStatistModel *_statistModel;
    NSDate *_gmtCreate;
    NSString *_modelId;
}

@property(retain, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(retain, nonatomic) NSDate *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) MOBILEBILLStatistModel *statistModel; // @synthesize statistModel=_statistModel;
@property(retain, nonatomic) MOBILEBILLRecordModel *recordModel; // @synthesize recordModel=_recordModel;
@property(retain, nonatomic) MOBILEBILLBillModel *billModel; // @synthesize billModel=_billModel;
@property(retain, nonatomic) NSString *contactDataType; // @synthesize contactDataType=_contactDataType;
- (void).cxx_destruct;
- (id)adapterDictionary;

@end

