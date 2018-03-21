//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, VZTToken;

@interface VZTLexer : NSObject
{
    long long _line;
    NSString *_error;
    VZTToken *_lastToken;
    NSString *_source;
    long long _pointer;
    NSMutableArray *_lookAheadStack;
}

@property(retain, nonatomic) NSMutableArray *lookAheadStack; // @synthesize lookAheadStack=_lookAheadStack;
@property(nonatomic) long long pointer; // @synthesize pointer=_pointer;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, nonatomic) VZTToken *lastToken; // @synthesize lastToken=_lastToken;
- (void).cxx_destruct;
- (id)_nextToken;
- (id)unicodeRegex;
- (id)numberRegex;
- (id)nextToken;
- (id)lookAhead:(long long)arg1;
- (id)lookAhead;
- (void)skipSpaces;
- (id)initWithString:(id)arg1;
@property(readonly, nonatomic) NSString *error;

@end
