//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface _TTRountingObject_ : NSObject
{
    _Bool _supportReg;
    NSString *_host;
    id _block;
}

+ (id)rountingWithHost:(id)arg1 supportReg:(_Bool)arg2 block:(id)arg3;
@property(copy, nonatomic) id block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) _Bool supportReg; // @synthesize supportReg=_supportReg;
- (void).cxx_destruct;
- (id)initWithHost:(id)arg1 supportReg:(_Bool)arg2 block:(id)arg3;
- (id)init;

@end
