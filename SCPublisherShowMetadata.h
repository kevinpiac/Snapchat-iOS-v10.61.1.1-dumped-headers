//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCPublisherShowMetadata : NSObject <NSCopying, NSCoding>
{
    int _seasonNumber;
    int _episodeNumber;
    NSString *_showId;
    NSString *_showName;
    NSString *_showDescription;
    NSString *_showHeroImageURL;
    long long _showType;
    NSString *_episodeSubtitle;
    NSString *_profileOverlayButtonText;
    long long _profileLogoDisplay;
    NSString *_coverVideoManifestURL;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *coverVideoManifestURL; // @synthesize coverVideoManifestURL=_coverVideoManifestURL;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(readonly, copy, nonatomic) NSString *episodeSubtitle; // @synthesize episodeSubtitle=_episodeSubtitle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithShowId:(id)arg1 showName:(id)arg2 showDescription:(id)arg3 showHeroImageURL:(id)arg4 showType:(long long)arg5 episodeSubtitle:(id)arg6 profileOverlayButtonText:(id)arg7 profileLogoDisplay:(long long)arg8 coverVideoManifestURL:(id)arg9 seasonNumber:(int)arg10 episodeNumber:(int)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long profileLogoDisplay; // @synthesize profileLogoDisplay=_profileLogoDisplay;
@property(readonly, copy, nonatomic) NSString *profileOverlayButtonText; // @synthesize profileOverlayButtonText=_profileOverlayButtonText;
@property(readonly, nonatomic) int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(readonly, copy, nonatomic) NSString *showDescription; // @synthesize showDescription=_showDescription;
@property(readonly, copy, nonatomic) NSString *showHeroImageURL; // @synthesize showHeroImageURL=_showHeroImageURL;
@property(readonly, copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(readonly, copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(readonly, nonatomic) long long showType; // @synthesize showType=_showType;

@end

