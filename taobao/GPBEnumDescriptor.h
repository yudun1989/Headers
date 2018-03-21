//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GPBEnumDescriptor : NSObject
{
    NSString *name_;
    const char *valueNames_;
    const int *values_;
    CDUnknownFunctionPointerType enumVerifier_;
    const char *extraTextFormatInfo_;
    unsigned int *nameOffsets_;
    unsigned int valueCount_;
}

+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5 extraTextFormatInfo:(const char *)arg6;
+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5;
@property(readonly, nonatomic) CDUnknownFunctionPointerType enumVerifier; // @synthesize enumVerifier=enumVerifier_;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=name_;
- (id)textFormatNameForValue:(int)arg1;
- (_Bool)getValue:(int *)arg1 forEnumName:(id)arg2;
- (id)enumNameForValue:(int)arg1;
- (void)calcValueNameOffsets;
- (void)dealloc;
- (id)initWithName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5;

@end

