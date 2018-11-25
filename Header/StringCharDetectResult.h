//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface StringCharDetectResult : NSObject
{
    BOOL _hasLetters;
    BOOL _hasNumbers;
    BOOL _hasChinese;
    BOOL _hasOther;
    BOOL _hasWhitespace;
    BOOL _isStartWithLetter;
    BOOL _isStartWithNumber;
    BOOL _isAllLetters;
    BOOL _isAllNumbers;
    BOOL _isAllChinese;
    BOOL _isAllOther;
}

@property(nonatomic) BOOL isAllOther; // @synthesize isAllOther=_isAllOther;
@property(nonatomic) BOOL isAllChinese; // @synthesize isAllChinese=_isAllChinese;
@property(nonatomic) BOOL isAllNumbers; // @synthesize isAllNumbers=_isAllNumbers;
@property(nonatomic) BOOL isAllLetters; // @synthesize isAllLetters=_isAllLetters;
@property(nonatomic) BOOL isStartWithNumber; // @synthesize isStartWithNumber=_isStartWithNumber;
@property(nonatomic) BOOL isStartWithLetter; // @synthesize isStartWithLetter=_isStartWithLetter;
@property(nonatomic) BOOL hasWhitespace; // @synthesize hasWhitespace=_hasWhitespace;
@property(nonatomic) BOOL hasOther; // @synthesize hasOther=_hasOther;
@property(nonatomic) BOOL hasChinese; // @synthesize hasChinese=_hasChinese;
@property(nonatomic) BOOL hasNumbers; // @synthesize hasNumbers=_hasNumbers;
@property(nonatomic) BOOL hasLetters; // @synthesize hasLetters=_hasLetters;

@end
