//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface NBSMultPartsFormDataReader : NSObject
{
    struct _NSRange theRange;
    NSData *theData;
    long long currPos;
    char *buff;
    long long max;
}

+ (id)readerWithData:(id)arg1 range:(struct _NSRange)arg2 boundry:(id)arg3;
+ (const char *)decodeBytesFromBody:(id)arg1;
+ (id)readerWithData:(id)arg1 range:(struct _NSRange)arg2 HTTPRequestHeaders:(id)arg3;
- (void).cxx_destruct;
- (id)readln;
- (id)valuesForFields:(id)arg1;

@end

