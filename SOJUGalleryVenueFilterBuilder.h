//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryVenueFilterBuilder : NSObject
{
    NSNumber *_yOffset;
    NSArray *_venues;
    NSString *_selectedVenueId;
}

+ (id)withJUGalleryVenueFilter:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setSelectedVenueId:(id)arg1;
- (id)setVenues:(id)arg1;
- (id)setYOffset:(id)arg1;
- (id)setYOffsetValue:(double)arg1;

@end
