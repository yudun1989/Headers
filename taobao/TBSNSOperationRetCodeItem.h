//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSOperationRetCodeItem : TBJSONModel
{
    NSString *_msgCode;
    NSString *_msgInfo;
}

@property(retain, nonatomic) NSString *msgInfo; // @synthesize msgInfo=_msgInfo;
@property(retain, nonatomic) NSString *msgCode; // @synthesize msgCode=_msgCode;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

