//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSearchV1QueryCoordinator;

@interface SCPrototypeSearchShazamHelper : NSObject
{
    SCSearchV1QueryCoordinator *_queryCoordinator;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) SCSearchV1QueryCoordinator *queryCoordinator; // @synthesize queryCoordinator=_queryCoordinator;
- (id)queryWithSearchText:(id)arg1;
- (void)searchCardsForShazam:(id)arg1 userSession:(id)arg2 success:(CDUnknownBlockType)arg3;

@end

