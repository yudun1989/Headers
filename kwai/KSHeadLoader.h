//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSHeadLoader : NSObject
{
    NSArray *_cdnHeadURLs;
    NSString *_headURL;
    NSString *_imageName;
}

@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *headURL; // @synthesize headURL=_headURL;
@property(copy, nonatomic) NSArray *cdnHeadURLs; // @synthesize cdnHeadURLs=_cdnHeadURLs;
- (void).cxx_destruct;
- (void)loadImageForView:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

