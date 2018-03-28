//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RCTJSStackFrame : NSObject
{
    NSString *_methodName;
    NSString *_file;
    long long _lineNumber;
    long long _column;
}

+ (id)stackFramesWithDictionaries:(id)arg1;
+ (id)stackFramesWithLines:(id)arg1;
+ (id)stackFrameWithDictionary:(id)arg1;
+ (id)stackFrameWithLine:(id)arg1;
@property(readonly, nonatomic) long long column; // @synthesize column=_column;
@property(readonly, nonatomic) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(readonly, copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithMethodName:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 column:(long long)arg4;

@end

