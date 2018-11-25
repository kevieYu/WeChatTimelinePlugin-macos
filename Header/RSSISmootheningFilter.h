//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RSSISmootheningFilter : NSObject
{
    long long _numberOfSamples;
    NSMutableArray *_samples;
    long long _currentSampleIndex;
}

+ (id)sharedInstance;
@property(nonatomic) long long currentSampleIndex; // @synthesize currentSampleIndex=_currentSampleIndex;
@property(retain, nonatomic) NSMutableArray *samples; // @synthesize samples=_samples;
@property(nonatomic) long long numberOfSamples; // @synthesize numberOfSamples=_numberOfSamples;
- (void).cxx_destruct;
- (long long)getMaximumVariation;
- (long long)getMedianValue;
- (BOOL)isFilterFull;
- (void)reset;
- (void)addSample:(long long)arg1;

@end
