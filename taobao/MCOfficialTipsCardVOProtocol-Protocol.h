//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCOfficialMessageVOProtocol-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSString;

@protocol MCOfficialTipsCardVOProtocol <MCOfficialMessageVOProtocol>
@property(retain, nonatomic) NSString *urlText;
@property(retain, nonatomic) NSString *url;
@property(nonatomic) int length;
@property(nonatomic) int index;
@property(retain, nonatomic) NSString *content;
@property(retain, nonatomic) NSAttributedString *attributedContent;
@property(nonatomic) struct CGSize textSize;
- (NSDictionary *)templateList;
- (NSArray *)activeList;
@end

