//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSError, NSInputStream, NSMutableData, NSMutableString;
@protocol CHCSVParserDelegate;

@interface CHCSVParser : NSObject
{
    NSInputStream *_stream;
    unsigned long long _streamEncoding;
    NSMutableData *_stringBuffer;
    NSMutableString *_string;
    NSCharacterSet *_validFieldCharacters;
    unsigned long long _nextIndex;
    long long _fieldIndex;
    struct _NSRange _fieldRange;
    NSMutableString *_sanitizedField;
    unsigned short _delimiter;
    NSError *_error;
    unsigned long long _currentRecord;
    _Bool _cancelled;
    _Bool _recognizesBackslashesAsEscapes;
    _Bool _sanitizesFields;
    _Bool _recognizesComments;
    _Bool _stripsLeadingAndTrailingWhitespace;
    id <CHCSVParserDelegate> _delegate;
    unsigned long long _totalBytesRead;
}

@property(nonatomic) unsigned long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property _Bool stripsLeadingAndTrailingWhitespace; // @synthesize stripsLeadingAndTrailingWhitespace=_stripsLeadingAndTrailingWhitespace;
@property _Bool recognizesComments; // @synthesize recognizesComments=_recognizesComments;
@property _Bool sanitizesFields; // @synthesize sanitizesFields=_sanitizesFields;
@property _Bool recognizesBackslashesAsEscapes; // @synthesize recognizesBackslashesAsEscapes=_recognizesBackslashesAsEscapes;
@property id <CHCSVParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_error;
- (void)_endComment;
- (void)_beginComment;
- (void)_endField;
- (void)_beginField;
- (void)_endRecord;
- (void)_beginRecord;
- (void)_endDocument;
- (void)_beginDocument;
- (_Bool)_parseDelimiter;
- (_Bool)_parseUnescapedField;
- (_Bool)_parseEscapedField;
- (_Bool)_parseField;
- (void)_parseFieldWhitespace;
- (_Bool)_parseComment;
- (_Bool)_parseNewline;
- (_Bool)_parseRecord;
- (void)parse;
- (unsigned short)_peekPeekCharacter;
- (unsigned short)_peekCharacter;
- (void)_advance;
- (void)_loadMoreIfNecessary;
- (void)_sniffEncoding;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 usedEncoding:(unsigned long long *)arg2 delimiter:(unsigned short)arg3;
- (id)initWithCSVString:(id)arg1 delimiter:(unsigned short)arg2;

@end

