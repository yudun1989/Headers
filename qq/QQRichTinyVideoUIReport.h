//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQRichTinyVideoUIReport : NSObject
{
    NSString *_currentFilterName;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *currentFilterName; // @synthesize currentFilterName=_currentFilterName;
- (void)reportWithOpType:(id)arg1 opName:(id)arg2;
- (void)cleanCurrentFilter;
- (void)onTakePhotoWithFilter:(id)arg1;
- (void)onRecordVideoWithFilter:(id)arg1;
- (void)onSendPhotoWithFilter:(id)arg1;
- (void)onSendVideoWithFilter:(id)arg1;

@end

