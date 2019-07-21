//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString, SCCEncryptedThumbnail;

@interface SCCStorySummaryInfo : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _hasUnviewedSnaps;
    SCCEncryptedThumbnail *_thumbnail;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool hasUnviewedSnaps; // @synthesize hasUnviewedSnaps=_hasUnviewedSnaps;
- (id)initWithSCStoriesSummaryInfo:(id)arg1;
- (id)initWithThumbnail:(id)arg1 hasUnviewedSnaps:(_Bool)arg2;
@property(retain, nonatomic) SCCEncryptedThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

