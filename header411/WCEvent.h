//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCState;

@interface WCEvent : NSObject
{
    NSString *_name;
    NSArray *_sourceStates;
    WCState *_destinationState;
}

@property(readonly, nonatomic) WCState *destinationState; // @synthesize destinationState=_destinationState;
@property(readonly, nonatomic) NSArray *sourceStates; // @synthesize sourceStates=_sourceStates;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 transitioningFromStates:(id)arg2 toState:(id)arg3;

@end
