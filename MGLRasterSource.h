//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLTileSource.h"

@interface MGLRasterSource : MGLTileSource
{
}

- (id)attributionHTMLString;
- (id)configurationURL;
- (id)initWithIdentifier:(id)arg1 configurationURL:(id)arg2;
- (id)initWithIdentifier:(id)arg1 configurationURL:(id)arg2 tileSize:(double)arg3;
- (id)initWithIdentifier:(id)arg1 tileURLTemplates:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) struct RasterSource *rawSource;

@end

