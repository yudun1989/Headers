//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface KSLabelsFontManger : NSObject
{
    NSArray *_labels;
}

@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
- (void).cxx_destruct;
- (void)configMinFontSizeToAll;
- (void)observeAllLabel;
- (id)initWithLabels:(id)arg1;

@end

