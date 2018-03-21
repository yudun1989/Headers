//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface APTableSection : NSObject
{
    int _contentType;
    double _height;
    NSMutableArray *_rows;
    id _content;
}

+ (id)sectionWithCustomView:(id)arg1 reuseIdentifier:(id)arg2;
+ (id)sectionWithImage:(id)arg1;
+ (id)sectionWithTitle:(id)arg1;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(retain, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)rowAtIndex:(unsigned long long)arg1;
- (void)addRowsFromArray:(id)arg1;
- (void)addRow:(id)arg1;
- (id)allRows;
- (double)heightForFooterInTableView:(id)arg1 inSection:(long long)arg2;
- (double)heightForHeaderInTableView:(id)arg1 inSection:(long long)arg2;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (id)viewForTableView:(id)arg1;
- (void)commonInit;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

