//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol SCGalleryEntry, SCGallerySnap;

@interface SCGallerySelectionSnap : NSObject
{
    id <SCGallerySnap> _snap;
    id <SCGalleryEntry> _entry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *createTimeUtc;
@property(readonly, nonatomic) id <SCGalleryEntry> entry; // @synthesize entry=_entry;
- (unsigned long long)hash;
- (id)initWithSnap:(id)arg1 entry:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;

@end
