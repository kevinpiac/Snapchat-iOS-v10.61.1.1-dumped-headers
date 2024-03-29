//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SCAdServeInventoryBuilder : NSObject
{
    NSArray *_adIdentifiers;
    NSDictionary *_targeting;
    NSString *_publisherSlotId;
}

+ (id)adServeInventory;
+ (id)adServeInventoryFromExistingAdServeInventory:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withAdIdentifiers:(id)arg1;
- (id)withPublisherSlotId:(id)arg1;
- (id)withTargeting:(id)arg1;

@end

