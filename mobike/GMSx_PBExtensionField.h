//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GMSx_PBDescriptor, GMSx_PBExtensionDescriptor;

@interface GMSx_PBExtensionField : NSObject <NSCopying>
{
    struct PBExtensionDescription *description_;
    CDUnion_04684664 defaultPBValue_;
    Class messageOrGroupClass_;
    GMSx_PBExtensionDescriptor *descriptor_;
    GMSx_PBDescriptor *containingType_;
}

@property(readonly, nonatomic) GMSx_PBExtensionDescriptor *descriptor; // @synthesize descriptor=descriptor_;
@property(readonly, nonatomic) GMSx_PBDescriptor *containingType; // @synthesize containingType=containingType_;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareByFieldNumber:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 builder:(id)arg3;
- (id)readSingleValueFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 existingValue:(id)arg3;
- (id)description;
- (unsigned long long)computeSerializedSizeIncludingTag:(id)arg1;
- (unsigned long long)computePBSerializedSizesIncludingTags:(id)arg1;
- (void)writeValue:(id)arg1 includingTagToCodedOutputStream:(id)arg2;
- (void)writePBValues:(id)arg1 includingTagsToCodedOutputStream:(id)arg2;
@property(readonly, nonatomic) id defaultValue;
- (unsigned long long)computePBSerializedSizeIncludingTag:(CDUnion_04684664)arg1;
- (unsigned long long)computePBSerializedSizeNoTag:(CDUnion_04684664)arg1;
- (void)writePBValue:(CDUnion_04684664)arg1 noTagToCodedOutputStream:(id)arg2;
- (void)writePBValue:(CDUnion_04684664)arg1 includingTagToCodedOutputStream:(id)arg2;
@property(readonly, nonatomic) int wireType;
@property(readonly, nonatomic) int fieldNumber;
@property(readonly, nonatomic) _Bool isRepeated;
- (void)dealloc;
@property(readonly, nonatomic) Class containingMessageClass;
- (id)initWithDescription:(struct PBExtensionDescription *)arg1;
- (id)init;

@end

