//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSMutableArray;

@interface GCVFont : NSObject
{
    NSMutableArray *textures;
    float txLineX;
    float txLineY;
    float txLineH;
    _Bool useSingleGlyphTextures;
    float pointSize;
    float ascent;
    float descent;
    float contentScale;
    float glyphPadding;
    float xHeight;
    float lineWidth;
    unsigned short *glyphsBuffer;
    struct CGPoint *positionsBuffer;
    NSCache *layoutCache;
    struct unordered_map<int, EJFontGlyphInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, EJFontGlyphInfo>>> glyphInfoMap;
    _Bool _isStroke;
    struct __CTFont *_ctMainFont;
}

+ (id)sharedInstance;
@property(nonatomic) struct __CTFont *ctMainFont; // @synthesize ctMainFont=_ctMainFont;
@property(nonatomic) _Bool isStroke; // @synthesize isStroke=_isStroke;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGPoint)adjustTextPenPoint:(struct CGPoint)arg1 textAlign:(int)arg2 baseLine:(int)arg3 metrics:(CDStruct_de2edefb)arg4;
- (unsigned short)createGlyph:(unsigned short)arg1 withFont:(struct __CTFont *)arg2 glyphInfo:(CDStruct_85cb660e *)arg3;
- (id)getLayoutForString:(id)arg1;
- (void)resetWithFontStyle:(const char *)arg1 isStroke:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

