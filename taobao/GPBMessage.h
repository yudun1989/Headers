//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GPBExtensionDescriptor, GPBFieldDescriptor, GPBUnknownFieldSet, NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface GPBMessage : NSObject <NSSecureCoding, NSCopying>
{
    GPBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    GPBMessage *autocreator_;
    GPBFieldDescriptor *autocreatorField_;
    GPBExtensionDescriptor *autocreatorExtension_;
    struct GPBMessage_Storage *messageStorage_;
    long long readOnlySemaphoreCreationOnce_;
    NSObject<OS_dispatch_semaphore> *readOnlySemaphore_;
}

+ (_Bool)accessInstanceVariablesDirectly;
+ (_Bool)supportsSecureCoding;
+ (_Bool)resolveClassMethod:(SEL)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
+ (id)parseFromData:(id)arg1 error:(id *)arg2;
+ (id)message;
+ (id)descriptor;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)serializedSize;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;
- (_Bool)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned int)arg3;
- (void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2;
@property(copy, nonatomic) GPBUnknownFieldSet *unknownFields;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (void)clearExtension:(id)arg1;
- (void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;
- (void)addExtension:(id)arg1 value:(id)arg2;
- (void)setExtension:(id)arg1 value:(id)arg2;
- (id)sortedExtensionsInUse;
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(struct GPBExtensionRange)arg2;
- (id)extensionsCurrentlySet;
- (_Bool)hasExtension:(id)arg1;
- (id)getExistingExtension:(id)arg1;
- (id)getExtension:(id)arg1;
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;
- (void)writeDelimitedToCodedOutputStream:(id)arg1;
- (void)writeDelimitedToOutputStream:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)writeToOutputStream:(id)arg1;
- (id)delimitedData;
- (id)data;
- (id)descriptor;
@property(readonly, nonatomic, getter=isInitialized) _Bool initialized;
- (void)internalClear:(_Bool)arg1;
- (void)clear;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone *)arg2 descriptor:(id)arg3;
- (void)dealloc;
- (id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)init;

@end

