//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCXBitmojiLayerCalloutUtil : NSObject
{
}

+ (id)_calloutSubtitleFromSinglePersonLocation:(id)arg1 currentUserSharingLocation:(_Bool)arg2 currentUserId:(id)arg3;
+ (id)_calloutTitleFromPeople:(id)arg1 currentUserId:(id)arg2;
+ (id)_calloutTitleFromPerson:(id)arg1 currentUserId:(id)arg2;
+ (id)_locationStringForPersonLocations:(id)arg1;
+ (int)_roundUpToSingleSignificantDigit:(float)arg1;
+ (id)calloutSubtitleFromPersonLocations:(id)arg1 currentUserSharingLocation:(_Bool)arg2 currentUserId:(id)arg3;
+ (id)calloutTextFromPersonLocations:(id)arg1;
+ (id)calloutTitleFromPersonLocations:(id)arg1 groupsProvider:(id)arg2 currentUserId:(id)arg3;
+ (int)locationAccuracyDistanceForDistance:(double)arg1;
+ (id)locationAccuracyStringForDistance:(double)arg1;
+ (id)locationAccuracyUnitsForDistance:(double)arg1;

@end

