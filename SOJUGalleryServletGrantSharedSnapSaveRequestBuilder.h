//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SOJUGallerySnapSource;

@interface SOJUGalleryServletGrantSharedSnapSaveRequestBuilder : NSObject
{
    SOJUGallerySnapSource *_source;
    NSNumber *_entrySource;
    NSString *_entryExternalId;
}

+ (id)withJUGalleryServletGrantSharedSnapSaveRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setEntryExternalId:(id)arg1;
- (id)setEntrySource:(id)arg1;
- (id)setEntrySourceEnum:(long long)arg1;
- (id)setEntrySourceValue:(int)arg1;
- (id)setSource:(id)arg1;

@end
