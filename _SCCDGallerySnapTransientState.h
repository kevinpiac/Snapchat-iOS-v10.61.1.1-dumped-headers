//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, SCCDGallerySnapTransientStateID;

@interface _SCCDGallerySnapTransientState : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property int bgMediaUploadStateValue;
@property(readonly, nonatomic) SCCDGallerySnapTransientStateID *objectID;
- (int)primitiveBgMediaUploadStateValue;
- (void)setPrimitiveBgMediaUploadStateValue:(int)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *bgMediaUploadKey; // @dynamic bgMediaUploadKey;
@property(retain, nonatomic) NSNumber *bgMediaUploadState; // @dynamic bgMediaUploadState;
@property(retain, nonatomic) NSString *snapId; // @dynamic snapId;

@end

