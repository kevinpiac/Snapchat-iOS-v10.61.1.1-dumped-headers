//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SOJUSnapCreatorAttribution;

@interface SCGallerySharedFolderViewModel : NSObject <NSCopying>
{
    NSArray *_sharedEntries;
    NSString *_externalId;
    NSString *_title;
    unsigned long long _count;
    long long _entrySource;
    SOJUSnapCreatorAttribution *_creatorAttribution;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) SOJUSnapCreatorAttribution *creatorAttribution; // @synthesize creatorAttribution=_creatorAttribution;
@property(readonly, nonatomic) long long entrySource; // @synthesize entrySource=_entrySource;
@property(readonly, copy, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
- (unsigned long long)hash;
- (id)initWithSharedEntries:(id)arg1 externalId:(id)arg2 title:(id)arg3 count:(unsigned long long)arg4 entrySource:(long long)arg5 creatorAttribution:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *sharedEntries; // @synthesize sharedEntries=_sharedEntries;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

