//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface OperatePropertiesVO : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasTopType;
    _Bool _hasDeleteType;
    _Bool _hasDefaultOrder;
    NSString *_topType;
    NSString *_deleteType;
    NSString *_defaultOrder;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *defaultOrder; // @synthesize defaultOrder=_defaultOrder;
@property(retain, nonatomic) NSString *deleteType; // @synthesize deleteType=_deleteType;
@property(retain, nonatomic) NSString *topType; // @synthesize topType=_topType;
@property(readonly) _Bool hasDefaultOrder; // @synthesize hasDefaultOrder=_hasDefaultOrder;
@property(readonly) _Bool hasDeleteType; // @synthesize hasDeleteType=_hasDeleteType;
@property(readonly) _Bool hasTopType; // @synthesize hasTopType=_hasTopType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

